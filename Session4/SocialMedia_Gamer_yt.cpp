
#include <iostream>
using namespace std;

// Base Class
class SocialMediaUser
{
public:
    string username;
    int followers;
};

// Derived Class
class YouTuber : public SocialMediaUser
{
public:
    string channelName;
};

// Multilevel Class
class GamingYouTuber : public YouTuber
{
public:
    void streamGame(string gameName)
    {
        cout << username
             << " is now streaming "
             << gameName
             << " on "
             << channelName << endl;
    }
};

int main()
{
    GamingYouTuber g1;

    g1.username = "Ayan";
    g1.followers = 25000;
    g1.channelName = "Gaming Zone";

    g1.streamGame("BGMI");

    return 0;
}
