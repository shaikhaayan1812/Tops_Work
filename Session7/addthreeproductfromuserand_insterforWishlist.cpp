#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("wishlist.txt");

    string product;
    float price;

    for(int i = 1; i <= 3; i++)
    {
        cout << "Enter Product " << i << " : ";
        cin >> product;

        cout << "Enter Price : ";
        cin >> price;

        file << product << " " << price << endl;
    }

    file.close();

    ifstream read("wishlist.txt");

    cout << "\nWishlist:\n";

    while(read >> product >> price)
    {
        cout << "Product : " << product
             << "  Price : " << price << endl;
    }

    read.close();

    return 0;
}
