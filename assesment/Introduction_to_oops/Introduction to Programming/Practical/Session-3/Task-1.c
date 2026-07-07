#include <stdio.h>

int main() {
    char productName[] = "Smartphone";
    float price = 19999.99;
    double rating = 4.5;

    printf("Product Name (string): %s\n", productName);
    printf("Price (float): %.2f\n", price);
    printf("Rating (double): %.1lf\n", rating);

    return 0;
}