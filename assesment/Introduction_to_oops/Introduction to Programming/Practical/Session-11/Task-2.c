#include <stdio.h>

void swapPlaylistCounts(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int playlist1 = 20, playlist2 = 35;

    swapPlaylistCounts(&playlist1, &playlist2);

    printf("Playlist1 = %d\n", playlist1);
    printf("Playlist2 = %d\n", playlist2);

    return 0;
}