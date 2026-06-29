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
class InstagramInfluencer : public SocialMediaUser
{
public:
    void postStory(string storyTitle)
    {
        cout << username
             << " posted a new story: "
             << storyTitle << endl;
    }
};

int main()
{
    InstagramInfluencer i1;

    i1.username = "Ayan";
    i1.followers = 15000;

    i1.postStory("Trip to Tops");

    return 0;
}
