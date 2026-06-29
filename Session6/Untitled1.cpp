#include <iostream>
using namespace std;

// Song Class
class Song
{
private:
    string title;      // Private Property
    string artist;     // Private Property

public:

    // Setter for Title
    void setTitle(string t)
    {
        title = t;
    }

    // Getter for Title
    string getTitle()
    {
        return title;
    }

    // Setter for Artist
    void setArtist(string a)
    {
        artist = a;
    }

    // Getter for Artist
    string getArtist()
    {
        return artist;
    }
};

int main()
{
    Song s1;

    s1.setTitle("Believer");
    s1.setArtist("Imagine Dragons");

    // Update Title
    s1.setTitle("Shape of You");

    cout << "Title : " << s1.getTitle() << endl;
    cout << "Artist : " << s1.getArtist() << endl;

    return 0;
}
