#include <iostream>
using namespace std;

// Playlist class
class Playlist
{
public:
    string name;              // Playlist ka naam
    string createdOn;         // Playlist banne ki date
    bool isPublic;            // Public ya Private

    string songs[10];         // Songs store karne ke liye array
    int count;                // Kitne songs add hue

    // Constructor
    Playlist()
    {
        count = 0;            // Starting me koi song nahi hai
    }

    // Song add karne ka function
    void addSong(string songTitle)
    {
        songs[count] = songTitle;
        count++;
    }

    // Songs ki list display karne ka function
    void showSongs()
    {
        cout << "\nSongs List:\n";

        for(int i = 0; i < count; i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()      // Program yahan se start hota hai
{
    Playlist p1;      // Object banana

    // Playlist details
    p1.name = "My Playlist";
    p1.createdOn = "28-06-2026";
    p1.isPublic = true;

    // 3 Songs add karna
    p1.addSong("Shape of You");
    p1.addSong("Perfect");
    p1.addSong("Believer");

    // Songs display karna
    p1.showSongs();

    return 0;
}
