#include <stdio.h>

int main() {
    FILE *fp = fopen("playlist.txt", "a");

    fprintf(fp, "Love Story\n");
    fprintf(fp, "Love Me Like You Do\n");

    fclose(fp);

    return 0;
}