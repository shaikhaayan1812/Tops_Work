#include <iostream>
using namespace std;

// Parent Class
class MusicPlayer
{
public:

    virtual void play(string song)
    {
        cout << "Playing : " << song << endl;
    }
};

// Child Class
class SpotifyPlayer : public MusicPlayer
{
public:

    void play(string song)
    {
        cout << "Streaming on Spotify : " << song << endl;
    }
};

int main()
{
    // Parent Pointer
    MusicPlayer *m;

    // Child Object
    m = new SpotifyPlayer();

    // Function Call
    m->play("Perfect");

    return 0;
}
