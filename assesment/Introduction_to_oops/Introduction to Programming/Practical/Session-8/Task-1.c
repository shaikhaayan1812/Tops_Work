#include <stdio.h>

void increaseFollowersByValue(int followers) {
    followers += 1000;
    printf("Inside Value Function: %d\n", followers);
}

void increaseFollowersByReference(int *followers) {
    *followers += 1000;
}

int main() {
    int followers = 5000;

    increaseFollowersByValue(followers);
    printf("After Value Function: %d\n", followers);

    increaseFollowersByReference(&followers);
    printf("After Reference Function: %d\n", followers);

    return 0;
}