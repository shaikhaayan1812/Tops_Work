#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("playlist.txt", "r");
    char song[100];

    while(fgets(song, sizeof(song), fp)) {
        if(strstr(song, "Love") || strstr(song, "love")) {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;
}