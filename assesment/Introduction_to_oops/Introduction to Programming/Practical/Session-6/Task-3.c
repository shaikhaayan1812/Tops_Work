#include <stdio.h>
#include <string.h>

int main() {
    char guess[20];
    char song[] = "Believer";

    do {
        printf("Guess the song: ");
        scanf("%s", guess);
    } while(strcmp(guess, song) != 0);

    printf("Correct!\n");

    return 0;
}