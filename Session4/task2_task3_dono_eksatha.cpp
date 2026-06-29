#include <iostream>
using namespace std;

// Base Class
class SocialMediaUser
{
public:
    string username;
    int followers;
};

// Derived Class - YouTuber
class YouTuber : public SocialMediaUser
{
public:
    string channelName;

    void uploadVideo(string title)
    {
        cout << "Video " << title
             << " uploaded to "
             << channelName << endl;
    }
};

// Derived Class - Podcaster
class Podcaster : public SocialMediaUser
{
public:
    string podcastName;

    void publishEpisode(string episodeTitle)
    {
        cout << "Episode " << episodeTitle
             << " published on "
             << podcastName << endl;
    }
};

int main()
{
    // YouTuber Object
    YouTuber y1;
    y1.username = "Ayan";
    y1.followers = 10000;
    y1.channelName = "Tech World";

    y1.uploadVideo("C++ Tutorial");

    // Podcaster Object
    Podcaster p1;
    p1.username = "Ayan";
    p1.followers = 8000;
    p1.podcastName = "Tech Talks";

    p1.publishEpisode("AI Basics");

    return 0;
}
