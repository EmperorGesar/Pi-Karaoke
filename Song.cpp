#include "Song.h"

Song::Song() {

    name = "";
    singer = "";
    nameDisplay = "";
    singerDisplay = "";
    audioFileName = "";
    lyricFileName = "";
    key = 0;

}

void Song::setName(QString& text) {
    this->name = text;
}

void Song::setSinger(QString& text) {
    this->singer = text;
}

void Song::setNameDisplay(QString& text) {
    this->nameDisplay = text;
}

void Song::setSingerDisplay(QString& text) {
    this->singerDisplay = text;
}

void Song::setAudioFileName(QString& fileName) {
    this->audioFileName = fileName;
}

void Song::setLyricFileName(QString& fileName) {
    this->lyricFileName = fileName;
}

void Song::setKey(int key) {
    this->key = key;
}

QString Song::getName() {
    return name;
}

QString Song::getSinger() {
    return singer;
}

QString Song::getNameDisplay() {
    return nameDisplay;
}

QString Song::getSingerDisplay() {
    return singerDisplay;
}

QString Song::getAudioFileName() {
    return audioFileName;
}

QString Song::getLyricFileName() {
    return lyricFileName;
}

int Song::getKey() {
    return key;
}
