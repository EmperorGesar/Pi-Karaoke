# Pi-Karaoke

A Karaoke system implementation on raspberry pi

## Screenshot
![Image](https://github.com/EmperorGesar/Pi-Karaoke/blob/master/screenshot.png)

## Compile
Make sure Qt5 is installed.

Using CMakeLists and Makefile.
```bash
make
```

## Run
```bash
./karaoke -platform xcb
```

## Note
Config file is data.csv, used for locating the path of audio and lyric files.

data.csv format:

[Song Name(search)],[Singer(search)],[Song Name(display)],[Singer(display)],[Audio File],[Lyric File],[key]
