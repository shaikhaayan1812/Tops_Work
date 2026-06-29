#include <iostream>
using namespace std;

// Ticket class
class Ticket
{
public:

    // Constructor
    Ticket()
    {
        cout << "Ticket Booked Successfully!" << endl;
    }

    // Destructor
    ~Ticket()
    {
        cout << "Saving your ticket..." << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    // Object dynamically create karna
    Ticket *t1 = new Ticket();

    // Object delete karna
    delete t1;

    return 0;
}
