#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
private:
    int id;
    std::string title;
    std::string artist;
    std::string album;
    std::string genre;
    std::string lyricist;
    std::string language;
    int releaseYear;
    double duration;

public:
    Song();
    Song(int id, const std::string& title, const std::string& artist, const std::string& album,
         const std::string& genre, const std::string& lyricist, const std::string& language,
         int releaseYear, double duration);
    Song(const Song& other);
    ~Song();

    void display() const;

    friend std::istream& operator>>(std::istream& in, Song& song);

    friend std::ostream& operator<<(std::ostream& out, const Song& song);
};

#endif