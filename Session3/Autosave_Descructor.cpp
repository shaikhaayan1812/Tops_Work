#include <iostream>
#include <fstream>      // File handling ke liye
using namespace std;

// Playlist class
class Playlist
{
public:
    string name;      // Playlist ka naam

    // Constructor
    Playlist()
    {
        name = "My Favourites";
        cout << "Playlist Created!" << endl;
    }

    // Destructor
    ~Playlist()
    {
        ofstream file("autosave.txt");   // File open karna

        file << name;                    // Playlist name save karna

        file.close();                    // File close karna

        cout << "Playlist Auto-Saved!" << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    Playlist p1;      // Object banana

    // Program end hote hi Destructor automatically call hoga

    return 0;
} 
