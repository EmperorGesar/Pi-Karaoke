/**
 * @brief Class for storing lyric data
 */

#ifndef KARAOKE_LYRIC_H
#define KARAOKE_LYRIC_H

#include <QString>
#include <QFile>

class Lyric {

public:
    /**
     * @brief Constructor
     * @param fileName Name of lyric file
     */
    Lyric(QString& fileName);

    /**
     * @brief Get total line
     * @return Total number of line
     */
    int getLine();

    /**
     * @brief Get time of a line
     * @param i Line indexLine index
     * @return Time of the line
     */
    qint64 getTimes(int i);

    /**
     * @brief Get lyric of a line
     * @param i Line index
     * @return Lyric of the line
     */
    QString getWords(int i);

private:
    /**
     * Total number of line
     */
    int lineTotal;

    /**
     * Time of each line
     */
    QList<qint64> times;

    /**
     * Lyric of each line
     */
    QList<QString> words;

};

#endif
