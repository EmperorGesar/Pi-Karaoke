#include <iostream>
#include "mainwindow.h"
#include "ui_mainwindow.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {

    /// Initialize main window
    ui->setupUi(this);

    /// Initialize variables
    songTotal = 0;
    songInList = 0;
    nowPlaying = 0;
    line = 0;
    isPlaying = false;
    muted = false;
    searchField = "By Name";

    /// Initialize playlist and player
    playlist = new QMediaPlaylist(this);
    player = new QMediaPlayer(this);
    player->setPlaylist(playlist);

    /// Read data file and load song browse list
    dataFileName = QDir::currentPath() + "/data.csv";
    readFile();
    loadBrowse();

    /// Widgets connect to slot functions
    QObject::connect(ui->PlayButton, SIGNAL(clicked()), this, SLOT(play()));
    QObject::connect(ui->ReplayButton, SIGNAL(clicked()), this, SLOT(replay()));
    QObject::connect(ui->NextButton,SIGNAL(clicked()), this, SLOT(next()));
    QObject::connect(ui->MuteButton, SIGNAL(clicked()), this, SLOT(mute()));
    QObject::connect(ui->VolumeSlider, SIGNAL(sliderMoved(int)), this, SLOT(changeVolume(int)));
    QObject::connect(player, SIGNAL(positionChanged(qint64)), this, SLOT(changePosition(qint64)));
    QObject::connect(ui->FieldSelection, SIGNAL(currentIndexChanged(QString)), this, SLOT(changeSearchField()));
    QObject::connect(ui->SearchBar, SIGNAL(textChanged(QString)), this, SLOT(resetBrowse(QString)));
    QObject::connect(ui->BrowseList, SIGNAL(itemDoubleClicked(QListWidgetItem *)), this, SLOT(selectSong(QListWidgetItem *)));

    /// Initialize volume to 50
    ui->VolumeSlider->setValue(50);
    ui->Volume->setText(QString::number(50));
    player->setVolume(50);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::play() {

    if (songInList > 0) {

        ui->SongInfo->setText("Now Playing: " + names[nowPlaying] + ", By: " + singers[nowPlaying]);

        /// Switch the playing state
        if (!isPlaying) {
            player->play();
            ui->PlayButton->setText("Pause");
        } else {
            player->pause();
            ui->PlayButton->setText("Play");
        }

        isPlaying = !isPlaying;

    }

}

void MainWindow::replay() {

    if (songInList > 0) {

        /// Reset player and lyric
        player->setPosition(0);
        ui->LyricDisplay->setText("");
        ui->LyricNext->setText("");
        line = 0;

    }

}

void MainWindow::next() {

    /// Check whether it is not the last song
    if (nowPlaying + 1 < playlist->mediaCount()) {

        /// Set player to next song, update now playing index and reset lyric
        playlist->next();
        nowPlaying++;
        ui->LyricDisplay->setText("");
        ui->LyricNext->setText("");
        ui->SongInfo->setText("Now Playing: " + names[nowPlaying] + ", By: " + singers[nowPlaying]);

        /// Remove the song from playlist
        QListWidgetItem *item;
        item = ui->Playlist->takeItem(1);
        delete item;
        inListSongs.pop_front();
        songInList--;

    }

}

void MainWindow::mute() {

    /// Switch muting state
    if (!muted) {
        player->setVolume(0);
        ui->VolumeSlider->setDisabled(true);
        ui->MuteButton->setText("Unmute");
    } else {
        player->setVolume(ui->Volume->text().toInt());
        ui->VolumeSlider->setEnabled(true);
        ui->MuteButton->setText("Mute");
    }

    muted = !muted;

}

void MainWindow::changePosition(qint64 position) {

    /// Set end time label for display
    QTime endTime(0, (player->duration() / 60000) % 60, (player->duration() / 1000) % 60);
    ui->EndTime->setText(endTime.toString("mm:ss"));

    /// Set time slider duration
    ui->TimeSlider->setMaximum(player->duration() / 1000);
    ui->TimeSlider->setValue(position / 1000);

    if (position == 0) {
        line = 0;
    }

    /// Check whether is the end of the song
    if (player->mediaStatus() == QMediaPlayer::EndOfMedia){

        /// Reset lyric
        ui->LyricDisplay->setText("");
        ui->SongInfo->setText("");

        /// Remove the song from playlist
        QListWidgetItem *item;
        item = ui->Playlist->takeItem(1);
        delete item;
        inListSongs.pop_front();
        songInList--;

        if (nowPlaying + 1 < playlist->mediaCount()){
            nowPlaying++;
            ui->SongInfo->setText("Now Playing: " + names[nowPlaying] + ", By: " + singers[nowPlaying]);
        } else {

            /// If is the last song, reset playlist, song name and singer display string list
            isPlaying = false;
            ui->PlayButton->setText("Play");
            songInList = 0;
            nowPlaying = 0;
            lyrics.clear();
            names.clear();
            singers.clear();
            playlist->clear();

        }

    }

    /// Set current time label for display
    QTime currentTime(0, (position / 60000) % 60, (position / 1000) % 60);
    ui->CurrentTime->setText(currentTime.toString("mm:ss"));

    /// Check whether to update lyric
    if (!lyrics.isEmpty() && position >= lyrics[nowPlaying]->getTimes(line)) {
        ui->LyricDisplay->setText(lyrics[nowPlaying]->getWords(line));
        if (line < lyrics[nowPlaying]->getLine() - 1) {
            line++;
            ui->LyricNext->setText(lyrics[nowPlaying]->getWords(line));
        } else {
            ui->LyricNext->setText("");
        }
    }

}

void MainWindow::changeVolume(int volume) {
    player->setVolume(volume);
    ui->Volume->setText(QString::number(volume));
}

void MainWindow::changeSearchField() {

    /// Reset search bar
    ui->SearchBar->setText("");

    /// Switch field
    if (ui->FieldSelection->currentIndex() == 0){
        searchField = "By Name";
    } else {
        searchField = "By Singer";
    }

}

void MainWindow::readFile() {

    /// Open file
    QFile file(dataFileName);
    file.open(QIODevice::ReadOnly);

    /// Split and read each line
    while (!file.atEnd()){

        QString currentLine = file.readLine();
        QStringList buffer = currentLine.split(',');

        Song *record = new Song();
        record->setName(buffer[0]);
        record->setSinger(buffer[1]);
        record->setNameDisplay(buffer[2]);
        record->setSingerDisplay(buffer[3]);
        record->setAudioFileName(buffer[4]);
        record->setLyricFileName(buffer[5]);
        record->setKey(buffer[6].toInt());

        allSongs.append(record);
        songTotal++;

    }

}

void MainWindow::loadBrowse() {

    /// Load all songs
    for (int i = 0; i < songTotal; i++) {
        QListWidgetItem *item = new QListWidgetItem();
        item->setData(Qt::UserRole, allSongs[i]->getKey());
        item->setText(displayText(allSongs[i]->getNameDisplay(), allSongs[i]->getSingerDisplay()));
        ui->BrowseList->addItem(item);
    }

}

void MainWindow::resetBrowse(QString input) {

    int count = ui->BrowseList->count() - 1;
    QListWidgetItem *item;

    /// Clean song browse list
    for (int i = 0; i < count; i++){
        item = ui->BrowseList->takeItem(1);
        delete item;
    }

    /// Reload song browse list by matching the user input
    for (int i = 0; i < songTotal; i++){

        if (searchField == "By Name"){

            if (allSongs[i]->getName().startsWith(input)){
                QListWidgetItem *newItem = new QListWidgetItem();
                newItem->setData(Qt::UserRole, allSongs[i]->getKey());
                newItem->setText(displayText(allSongs[i]->getNameDisplay(), allSongs[i]->getSingerDisplay()));
                ui->BrowseList->addItem(newItem);
            }

        } else if (searchField == "By Singer") {

            if (allSongs[i]->getSinger().startsWith(input)){
                QListWidgetItem *newItem = new QListWidgetItem();
                newItem->setData(Qt::UserRole, allSongs[i]->getKey());
                newItem->setText(displayText(allSongs[i]->getNameDisplay(), allSongs[i]->getSingerDisplay()));
                ui->BrowseList->addItem(newItem);
            }

        }

    }

}

void MainWindow::selectSong(QListWidgetItem *item) {

    /// Get selected primary key
    int key = item->data(Qt::UserRole).toInt();

    for (int i = 0; i < songTotal; i++){

        if (key == allSongs[i]->getKey()){

            /// Check whether the song is not in play list
            bool valid = true;
            if (songInList > 0) {
                for (int j = 0; j < songInList; j++){
                    if (key == inListSongs[j]) {
                        valid = false;
                    }
                }
            }

            /// If the song is not in play list or no song in play list, add the song to play list
            if (valid || songInList == 0) {

                QListWidgetItem *item = new QListWidgetItem();
                item->setData(Qt::UserRole, allSongs[i]->getKey());
                item->setText(allSongs[i]->getNameDisplay());
                ui->Playlist->addItem(item);

                inListSongs.append(allSongs[i]->getKey());
                playlist->addMedia(QMediaContent(QUrl::fromLocalFile(allSongs[i]->getAudioFileName())));

                /// Add lyric, song name and singer display to lists
                Lyric *lyric = new Lyric(allSongs[i]->getLyricFileName());
                lyrics.append(lyric);
                names.append(allSongs[i]->getNameDisplay());
                singers.append(allSongs[i]->getSingerDisplay());

                songInList++;

            }

        }

    }

}

QString MainWindow::displayText(QString songName, QString singer) {

    QString text;
    text = songName;

    /// Reformat long song name
    int length = songName.length();
    if (length > 14) {
        text = songName.left(14) + "…";
        length = 15;
    }

    /// Add spaces
    for (int j = 0; j < 16 - length; j++) {
        text = text + "　";
    }

    /// Add singer
    text = text + singer;
    return text;

}
