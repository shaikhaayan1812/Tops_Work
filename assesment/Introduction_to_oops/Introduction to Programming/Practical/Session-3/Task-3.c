#include <stdio.h>

int main() {
    char playlist[] = "My Favorites";
    int songs = 50;
    float avgDuration = 3.5;

    printf("Playlist '%s' has %d songs with an average duration of %.1f minutes.\n",
           playlist, songs, avgDuration);

    return 0;
}