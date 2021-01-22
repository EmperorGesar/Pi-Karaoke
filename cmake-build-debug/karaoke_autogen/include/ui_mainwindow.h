/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSlider *TimeSlider;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ReplayButton;
    QPushButton *PlayButton;
    QPushButton *NextButton;
    QPushButton *MuteButton;
    QSlider *VolumeSlider;
    QLabel *CurrentTime;
    QLabel *EndTime;
    QLabel *Volume;
    QLabel *VolumeLable;
    QListWidget *Playlist;
    QLabel *LyricDisplay;
    QLabel *LyricNext;
    QLabel *PlaylistLable;
    QLineEdit *SearchBar;
    QComboBox *FieldSelection;
    QLabel *SearchLable;
    QLabel *SongInfo;
    QListWidget *BrowseList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(1280, 720));
        MainWindow->setMaximumSize(QSize(1280, 720));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TimeSlider = new QSlider(centralwidget);
        TimeSlider->setObjectName(QString::fromUtf8("TimeSlider"));
        TimeSlider->setGeometry(QRect(330, 610, 860, 20));
        TimeSlider->setMinimumSize(QSize(860, 20));
        TimeSlider->setMaximumSize(QSize(860, 20));
        TimeSlider->setLayoutDirection(Qt::LeftToRight);
        TimeSlider->setOrientation(Qt::Horizontal);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(330, 630, 631, 81));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ReplayButton = new QPushButton(horizontalLayoutWidget);
        ReplayButton->setObjectName(QString::fromUtf8("ReplayButton"));

        horizontalLayout->addWidget(ReplayButton);

        PlayButton = new QPushButton(horizontalLayoutWidget);
        PlayButton->setObjectName(QString::fromUtf8("PlayButton"));

        horizontalLayout->addWidget(PlayButton);

        NextButton = new QPushButton(horizontalLayoutWidget);
        NextButton->setObjectName(QString::fromUtf8("NextButton"));

        horizontalLayout->addWidget(NextButton);

        MuteButton = new QPushButton(horizontalLayoutWidget);
        MuteButton->setObjectName(QString::fromUtf8("MuteButton"));

        horizontalLayout->addWidget(MuteButton);

        VolumeSlider = new QSlider(centralwidget);
        VolumeSlider->setObjectName(QString::fromUtf8("VolumeSlider"));
        VolumeSlider->setGeometry(QRect(1080, 660, 110, 20));
        VolumeSlider->setMinimumSize(QSize(110, 20));
        VolumeSlider->setMaximumSize(QSize(110, 20));
        VolumeSlider->setOrientation(Qt::Horizontal);
        CurrentTime = new QLabel(centralwidget);
        CurrentTime->setObjectName(QString::fromUtf8("CurrentTime"));
        CurrentTime->setGeometry(QRect(260, 610, 60, 20));
        CurrentTime->setMinimumSize(QSize(60, 20));
        CurrentTime->setMaximumSize(QSize(60, 20));
        EndTime = new QLabel(centralwidget);
        EndTime->setObjectName(QString::fromUtf8("EndTime"));
        EndTime->setGeometry(QRect(1210, 610, 60, 20));
        EndTime->setMinimumSize(QSize(60, 20));
        EndTime->setMaximumSize(QSize(60, 20));
        Volume = new QLabel(centralwidget);
        Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->setGeometry(QRect(1210, 660, 60, 20));
        Volume->setMinimumSize(QSize(60, 20));
        Volume->setMaximumSize(QSize(60, 20));
        VolumeLable = new QLabel(centralwidget);
        VolumeLable->setObjectName(QString::fromUtf8("VolumeLable"));
        VolumeLable->setGeometry(QRect(985, 660, 80, 20));
        VolumeLable->setMinimumSize(QSize(80, 20));
        VolumeLable->setMaximumSize(QSize(80, 20));
        Playlist = new QListWidget(centralwidget);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(Playlist);
        __qlistwidgetitem->setFont(font);
        Playlist->setObjectName(QString::fromUtf8("Playlist"));
        Playlist->setGeometry(QRect(15, 55, 225, 645));
        Playlist->setMinimumSize(QSize(225, 645));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(false);
        Playlist->setFont(font1);
        Playlist->setFrameShape(QFrame::Panel);
        Playlist->setFrameShadow(QFrame::Sunken);
        Playlist->setDragEnabled(false);
        Playlist->setFlow(QListView::TopToBottom);
        Playlist->setResizeMode(QListView::Fixed);
        Playlist->setLayoutMode(QListView::SinglePass);
        Playlist->setModelColumn(0);
        Playlist->setWordWrap(false);
        Playlist->setSelectionRectVisible(false);
        LyricDisplay = new QLabel(centralwidget);
        LyricDisplay->setObjectName(QString::fromUtf8("LyricDisplay"));
        LyricDisplay->setGeometry(QRect(260, 530, 580, 50));
        LyricDisplay->setMinimumSize(QSize(580, 50));
        LyricDisplay->setMaximumSize(QSize(580, 50));
        QFont font2;
        font2.setPointSize(24);
        font2.setItalic(false);
        LyricDisplay->setFont(font2);
        LyricDisplay->setFrameShape(QFrame::NoFrame);
        LyricDisplay->setFrameShadow(QFrame::Sunken);
        LyricDisplay->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        LyricNext = new QLabel(centralwidget);
        LyricNext->setObjectName(QString::fromUtf8("LyricNext"));
        LyricNext->setGeometry(QRect(930, 555, 340, 25));
        LyricNext->setMinimumSize(QSize(340, 25));
        LyricNext->setMaximumSize(QSize(340, 25));
        LyricNext->setFont(font1);
        LyricNext->setFrameShape(QFrame::NoFrame);
        LyricNext->setFrameShadow(QFrame::Sunken);
        LyricNext->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        PlaylistLable = new QLabel(centralwidget);
        PlaylistLable->setObjectName(QString::fromUtf8("PlaylistLable"));
        PlaylistLable->setGeometry(QRect(15, 15, 80, 25));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlaylistLable->sizePolicy().hasHeightForWidth());
        PlaylistLable->setSizePolicy(sizePolicy);
        PlaylistLable->setMinimumSize(QSize(80, 25));
        PlaylistLable->setMaximumSize(QSize(80, 25));
        PlaylistLable->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        SearchBar = new QLineEdit(centralwidget);
        SearchBar->setObjectName(QString::fromUtf8("SearchBar"));
        SearchBar->setGeometry(QRect(345, 15, 795, 30));
        FieldSelection = new QComboBox(centralwidget);
        FieldSelection->addItem(QString());
        FieldSelection->addItem(QString());
        FieldSelection->setObjectName(QString::fromUtf8("FieldSelection"));
        FieldSelection->setGeometry(QRect(1140, 15, 120, 30));
        SearchLable = new QLabel(centralwidget);
        SearchLable->setObjectName(QString::fromUtf8("SearchLable"));
        SearchLable->setGeometry(QRect(260, 15, 80, 25));
        SearchLable->setMinimumSize(QSize(80, 25));
        SearchLable->setMaximumSize(QSize(80, 25));
        SongInfo = new QLabel(centralwidget);
        SongInfo->setObjectName(QString::fromUtf8("SongInfo"));
        SongInfo->setGeometry(QRect(260, 480, 1010, 25));
        QFont font3;
        font3.setPointSize(12);
        SongInfo->setFont(font3);
        BrowseList = new QListWidget(centralwidget);
        QFont font4;
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(BrowseList);
        __qlistwidgetitem1->setFont(font4);
        BrowseList->setObjectName(QString::fromUtf8("BrowseList"));
        BrowseList->setGeometry(QRect(260, 55, 1000, 410));
        BrowseList->setMinimumSize(QSize(1000, 410));
        BrowseList->setMaximumSize(QSize(1000, 16777215));
        QFont font5;
        font5.setPointSize(24);
        font5.setItalic(false);
        font5.setKerning(true);
        BrowseList->setFont(font5);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Pi-Karaoke", nullptr));
        ReplayButton->setText(QApplication::translate("MainWindow", "Replay", nullptr));
        PlayButton->setText(QApplication::translate("MainWindow", "Play", nullptr));
        NextButton->setText(QApplication::translate("MainWindow", "Next", nullptr));
        MuteButton->setText(QApplication::translate("MainWindow", "Mute", nullptr));
        CurrentTime->setText(QApplication::translate("MainWindow", "00:00", nullptr));
        EndTime->setText(QApplication::translate("MainWindow", "00:00", nullptr));
        Volume->setText(QApplication::translate("MainWindow", "0", nullptr));
        VolumeLable->setText(QApplication::translate("MainWindow", "Volume:", nullptr));

        const bool __sortingEnabled = Playlist->isSortingEnabled();
        Playlist->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = Playlist->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "Song Name :", nullptr));
        Playlist->setSortingEnabled(__sortingEnabled);

        LyricDisplay->setText(QString());
        LyricNext->setText(QString());
        PlaylistLable->setText(QApplication::translate("MainWindow", "Playlist:", nullptr));
        SearchBar->setText(QString());
        FieldSelection->setItemText(0, QApplication::translate("MainWindow", "By Name", nullptr));
        FieldSelection->setItemText(1, QApplication::translate("MainWindow", "By Singer", nullptr));

        SearchLable->setText(QApplication::translate("MainWindow", "Search:", nullptr));
        SongInfo->setText(QString());

        const bool __sortingEnabled1 = BrowseList->isSortingEnabled();
        BrowseList->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem1 = BrowseList->item(0);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "Song Name :\343\200\200\343\200\200\343\200\200\343\200\200\343\200\200\343\200\200\343\200\200\343\200\200\343\200\200\343\200\200Singer :", nullptr));
        BrowseList->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
