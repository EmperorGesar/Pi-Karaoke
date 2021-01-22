/**
 * @brief Class for storing song data
 */

#ifndef KARAOKE_SONG_H
#define KARAOKE_SONG_H

#include <QString>

class Song {

public:
    /**
     * @brief Constructor
     */
    Song();

    /**
     * @brief Set song name for search
     * @param text Song name for search
     */
    void setName(QString& text);

    /**
     * @brief Set singer for search
     * @param text Singer for search
     */
    void setSinger(QString& text);

    /**
     * @brief Set song name for display
     * @param text Song name for display
     */
    void setNameDisplay(QString& text);

    /**
     * @brief Set singer for display
     * @param text Singer for display
     */
    void setSingerDisplay(QString& text);

    /**
     * @brief Set file name of audio
     * @param fileName File name of audio
     */
    void setAudioFileName(QString& fileName);

    /**
     * @brief Set file name of lyric
     * @param fileName File name of lyric
     */
    void setLyricFileName(QString& fileName);

    /**
     * @brief Set primary key
     * @param key Primary key
     */
    void setKey(int key);

    /**
     * @brief Get song name for search
     * @return Song name for search
     */
    QString getName();

    /**
     * @brief Get singer for search
     * @return Singer for search
     */
    QString getSinger();

    /**
     * @brief Get song name for display
     * @return Song name for display
     */
    QString getNameDisplay();

    /**
     * @brief Get singer for display
     * @return Singer for display
     */
    QString getSingerDisplay();

    /**
     * @brief Get file name of audio
     * @return File name of audio
     */
    QString getAudioFileName();

    /**
     * @brief Get file name of lyric
     * @return File name of lyric
     */
    QString getLyricFileName();

    /**
     * @brief Get primary key of the song
     * @return Primary key of the song
     */
    int getKey();

private:
    /**
     * Song name for search
     */
    QString name;

    /**
     * Singer for search
     */
    QString singer;

    /**
     * Song name for display
     */
    QString nameDisplay;

    /**
     * Singer for display
     */
    QString singerDisplay;

    /**
     * File name of audio
     */
    QString audioFileName;

    /**
     * File name of lyric
     */
    QString lyricFileName;

    /**
     * Primary key of the song
     */
    int key;

};

#endif
