#include <stdio.h>

int main() {
    FILE *fp = fopen("playlist.txt", "w");

    fprintf(fp, "Believer\n");
    fprintf(fp, "Perfect\n");
    fprintf(fp, "Tum Hi Ho\n");

    fclose(fp);

    return 0;
}