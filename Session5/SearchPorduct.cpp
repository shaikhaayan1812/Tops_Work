 #include <iostream>
using namespace std;

class Flipkart
{
public:

    // Method 1
    void searchProduct(string name)
    {
        cout << "Searching Product : " << name << endl;
    }

    // Method 2
    void searchProduct(string name, string category)
    {
        cout << "Searching Product : " << name << endl;
        cout << "Category : " << category << endl;
    }
};

int main()
{
    Flipkart f;

    f.searchProduct("Laptop");

    cout << endl;

    f.searchProduct("Laptop", "Electronics");

    return 0;
}
