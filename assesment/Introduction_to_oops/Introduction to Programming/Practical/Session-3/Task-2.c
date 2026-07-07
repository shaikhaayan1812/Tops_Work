#include <stdio.h>

int main() {
    const float GST = 18.0;
    float basePrice = 500.0;

    float finalPrice = basePrice + (basePrice * GST / 100);

    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}