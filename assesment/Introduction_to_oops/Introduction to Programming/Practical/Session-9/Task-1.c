#include <stdio.h>

int main() {
    int dailySteps[7] = {5000, 6500, 7000, 8000, 7500, 9000, 8500};

    for(int i = 0; i < 7; i++) {
        printf("%d\n", dailySteps[i]);
    }

    return 0;
}