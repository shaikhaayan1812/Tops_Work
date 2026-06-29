#include <iostream>
using namespace std;

// Abstract Class
class Product
{
public:

    virtual void upload() = 0;      // Pure Virtual Function
};

// Electronics Class
class Electronics : public Product
{
public:

    void upload()
    {
        cout << "Electronics Product Uploaded" << endl;
    }
};

// Clothing Class
class Clothing : public Product
{
public:

    void upload()
    {
        cout << "Clothing Product Uploaded" << endl;
    }
};

int main()
{
    Electronics e;
    Clothing c;

    e.upload();

    c.upload();

    return 0;
}
