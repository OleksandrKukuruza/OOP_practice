#include "Song.h"
#include <iostream>

int main() {
    Song defaultSong;
    defaultSong.display();

    Song paramSong(1, "Imagine", "John Lennon", "Imagine", "Rock", "John Lennon", "English", 1971, 3.1);
    paramSong.display();

    Song copiedSong(paramSong);
    copiedSong.display();

    return 0;
}