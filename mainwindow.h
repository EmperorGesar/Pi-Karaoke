#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QtWidgets>
#include <QtMultimedia>
#include <Lyric.h>
#include <Song.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

/**
 * @brief Main window implementation of user interface
 */
class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    /**
     * @brief Main window constructor
     * @param parent Inherits QMainWindow
     */
    MainWindow(QWidget *parent = nullptr);

    /**
     * @brief Main window destructor
     */
    ~MainWindow();

private:
    /**
     * Flag indicates the playing state
     */
    bool isPlaying;

    /**
     * Flag indicates the muting state
     */
    bool muted;

    /**
     * Line number of the lyric of the playing song
     */
    int line;

    /**
     * Total number of song loaded from data file
     */
    int songTotal;

    /**
     * Total number of song in playlist
     */
    int songInList;

    /**
     * Index of the playing song in playlist
     */
    int nowPlaying;

    /**
     * UI of the main window contains necessary widgets
     */
    Ui::MainWindow *ui;

    /**
     * Name of the data file
     */
    QString dataFileName;

    /**
     * Filed for searching from the selection combobox
     */
    QString searchField;

    /**
     * Lyrics of songs in playlist
     */
    QList<Lyric *> lyrics;

    /**
     * Song name for display of songs in playlist
     */
    QList<QString> names;

    /**
     * Singer for display of songs in playlist
     */
    QList<QString> singers;

    /**
     * All song data loaded from data file
     */
    QList<Song *> allSongs;

    /**
     * List of primary keys of songs in playlist
     */
    QList<int> inListSongs;

    /**
     * Audio player
     */
    QMediaPlayer *player;

    /**
     * Playlist for player to read
     */
    QMediaPlaylist *playlist;

private:
    /**
     * @brief Method for reading audio and lyric data from .csv file
     */
    void readFile();

    /**
     * @brief Method for initializing the song browse list
     */
    void loadBrowse();

    /**
     * @brief Method for generating string display on song browse list (Warning: CJK only)
     * @param songName Song name for display
     * @param singer Singer for display
     * @return String display on song browse list
     */
    static QString displayText(QString songName, QString singer);

private slots:
    /**
     * @brief Slot function for play button
     */
    void play();

    /**
     * @brief Slot function for replay button
     */
    void replay();

    /**
     * @brief Slot function for next button
     */
    void next();

    /**
     * @brief Slot function for mute button
     */
    void mute();

    /**
     * @brief Slot function for volume slider
     * @param volume Target volume
     */
    void changeVolume(int volume);

    /**
     * @brief Slot function for player display position change
     * @param position Current position of audio
     */
    void changePosition(qint64 position);

    /**
     * @brief Slot function for field selection combobox
     */
    void changeSearchField();

    /**
     * @brief Slot function for search bar that resets the song browse list
     * @param input User input on search bar
     */
    void resetBrowse(QString input);

    /**
     * @brief Slot function for song browse list item that add the song to playlist
     * @param item Song browse list item that indicates a song
     */
    void selectSong(QListWidgetItem *item);

};

#endif
