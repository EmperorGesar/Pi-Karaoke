#include <iostream>
#include "Lyric.h"
using namespace std;

Lyric::Lyric(QString& fileName) {

    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    lineTotal = 0;

    while (!file.atEnd()){

        QString currentLine = file.readLine();
        int p = 0, q = 0;
        qint64 time = 0;
        QString buffer;

        do {

            if (currentLine.toStdString()[p] != '[' && currentLine.toStdString()[p] != ':' && currentLine.toStdString()[p] != ']') {
                buffer[q] = currentLine[p];
                q++;
            }

            p++;

            if (currentLine.toStdString()[p] == ':') {
                time = buffer.toInt() * 60000;
                q = 0;
            }

            if (currentLine.toStdString()[p] == ']') {
                time = time + buffer.toFloat() * 1000;
                q = 0;
            }

        } while (currentLine[p] != '\n');

        times.append(time);
        words.append(buffer);
        lineTotal++;

    }

}

int Lyric::getLine() {
    return lineTotal;
}

qint64 Lyric::getTimes(int i) {
    return times[i];
}

QString Lyric::getWords(int i) {
    return words[i];
}
