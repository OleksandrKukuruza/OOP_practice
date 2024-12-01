#include "Song.h"
#include <iostream>

Song::Song() : id(0), title(""), artist(""), album(""), genre(""), lyricist(""), language(""), releaseYear(0), duration(0.0) {}

Song::Song(int id, const std::string& title, const std::string& artist, const std::string& album,
           const std::string& genre, const std::string& lyricist, const std::string& language,
           int releaseYear, double duration)
    : id(id), title(title), artist(artist), album(album), genre(genre), lyricist(lyricist),
      language(language), releaseYear(releaseYear), duration(duration) {}

Song::Song(const Song& other)
    : id(other.id), title(other.title), artist(other.artist), album(other.album), genre(other.genre),
      lyricist(other.lyricist), language(other.language), releaseYear(other.releaseYear), duration(other.duration) {}

Song::~Song() {
    std::cout << "Destructor called for Song ID: " << id << std::endl;
}

void Song::display() const {
    std::cout << "Song Details:\n"
              << "ID: " << id << "\n"
              << "Title: " << title << "\n"
              << "Artist: " << artist << "\n"
              << "Album: " << album << "\n"
              << "Genre: " << genre << "\n"
              << "Lyricist: " << lyricist << "\n"
              << "Language: " << language << "\n"
              << "Release Year: " << releaseYear << "\n"
              << "Duration: " << duration << " minutes\n";
}