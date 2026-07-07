#include <stdio.h>

void incrementFollowers(int *followers, int n) {
    for(int i = 0; i < n; i++) {
        *(followers + i) += 100;
    }
}

int main() {
    int followers[5] = {1000, 1500, 2000, 2500, 3000};

    incrementFollowers(followers, 5);

    for(int i = 0; i < 5; i++) {
        printf("%d ", followers[i]);
    }

    return 0;
}