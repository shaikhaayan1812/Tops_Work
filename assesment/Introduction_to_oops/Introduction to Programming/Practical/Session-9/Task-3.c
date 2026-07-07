#include <stdio.h>

float calculateAverage(int orders[], int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += orders[i];
    }

    return (float)sum / size;
}

int main() {
    int orders[7] = {250, 300, 180, 400, 350, 220, 300};

    printf("Average Spend = %.2f", calculateAverage(orders, 7));

    return 0;
}