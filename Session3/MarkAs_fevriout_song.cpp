#include <iostream>
using namespace std;

// Playlist class
class Playlist
{
public:
    string name;      // Playlist ka naam

    // Default Constructor
    Playlist()
    {
        name = "My Favourites";    // Default playlist name

        cout << "Welcome to Playlist!" << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    Playlist p1;      // Object banate hi constructor call hoga

    // Playlist name print karna
    cout << "Playlist Name : " << p1.name << endl;

    return 0;
}
