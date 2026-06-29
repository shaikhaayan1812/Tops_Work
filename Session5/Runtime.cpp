 #include <iostream>
using namespace std;

// Base Class
class SocialMediaUploader
{
public:
    virtual void uploadContent()
    {
        cout << "Uploading Content..." << endl;
    }
};

// Instagram Class
class InstagramUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading Reel on Instagram" << endl;
    }
};

// YouTube Class
class YouTubeUploader : public SocialMediaUploader
{
public:
    void uploadContent()
    {
        cout << "Uploading Video on YouTube" << endl;
    }
};

int main()
{
    SocialMediaUploader *s;

    s = new InstagramUploader();
    s->uploadContent();

    s = new YouTubeUploader();
    s->uploadContent();

    return 0;
}
