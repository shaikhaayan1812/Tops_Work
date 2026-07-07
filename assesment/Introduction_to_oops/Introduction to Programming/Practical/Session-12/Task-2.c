#include <stdio.h>

struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    struct FoodItem menu[3] = {
        {"Pizza", 299.0, 4.5},
        {"Burger", 149.0, 4.2},
        {"Biryani", 249.0, 4.7}
    };

    for(int i = 0; i < 3; i++) {
        printf("%s - ₹%.2f - Rating %.1f\n",
               menu[i].itemName,
               menu[i].price,
               menu[i].rating);
    }

    return 0;
}