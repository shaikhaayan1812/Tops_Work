#include <iostream>
using namespace std;

// Product class
class Product
{
public:
    string productName;     // Product ka naam
    float price;            // Product ki price
    float rating;           // Product ki rating

    // Parameterized Constructor
    Product(string name, float p, float r)
    {
        productName = name;
        price = p;
        rating = r;
    }

    // Product ki details display karne ka function
    void displayInfo()
    {
        cout << "Product Name : " << productName << endl;
        cout << "Price : " << price << endl;
        cout << "Rating : " << rating << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    // Object banana aur values pass karna
    Product p1("iPhone 15", 79999, 4.8);

    // Product details display karna
    p1.displayInfo();

    return 0;
}
