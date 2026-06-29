#include <iostream>
using namespace std;

// Playlist class
class Playlist
{
public:
    string name;          // Playlist ka naam
    string createdOn;     // Creation date
    bool isPublic;        // Public ya Private
};

int main()      // Program yahan se start hota hai
{
    Playlist p1;      // Object banana

    // Properties ko value dena
    p1.name = "My Favorite Songs";
    p1.createdOn = "28-06-2026";
    p1.isPublic = true;

    // Properties print karna
    cout << "Playlist Name : " << p1.name << endl;
    cout << "Created On    : " << p1.createdOn << endl;
    cout << "Is Public     : ";

    if(p1.isPublic)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}
