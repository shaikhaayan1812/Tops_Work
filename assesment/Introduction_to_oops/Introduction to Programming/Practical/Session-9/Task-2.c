#include <stdio.h>

int main() {
    int playlistRatings[3][5] = {
        {4, 5, 4, 3, 5},
        {5, 4, 5, 4, 5},
        {3, 4, 4, 5, 4}
    };

    printf("Second Playlist Ratings:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", playlistRatings[1][i]);
    }

    return 0;
}