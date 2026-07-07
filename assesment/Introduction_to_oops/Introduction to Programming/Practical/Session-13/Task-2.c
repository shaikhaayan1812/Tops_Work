#include <stdio.h>

int main() {
    FILE *fp = fopen("playlist.txt", "r");
    char song[100];

    while(fgets(song, sizeof(song), fp)) {
        printf("%s", song);
    }

    fclose(fp);

    return 0;
}