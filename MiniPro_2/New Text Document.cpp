#include <iostream>      // Input Output ke liye
using namespace std;

// Content Class
class Content
{
public:
    string title;        // Content ka title
    string platform;     // Platform ka naam
    int views;           // Total views
    string status;       // Content status

    // Content ki details display karne ka function
    void display()
    {
        cout << "Title : " << title << endl;
        cout << "Platform : " << platform << endl;
        cout << "Views : " << views << endl;
        cout << "Status : " << status << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    Content c1;      // Object banana

    // Object ko values dena
    c1.title = "C++ Tutorial";
    c1.platform = "YouTube";
    c1.views = 5000;
    c1.status = "Published";

    // Details display karna
    c1.display();

    return 0;      // Program successfully end
}
