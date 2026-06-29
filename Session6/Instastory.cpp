#include <iostream>
using namespace std;

// Base Class
class InstaStory
{
protected:
    int storyViews = 5000;     // Protected Property
};

// Derived Class
class SponsoredStory : public InstaStory
{
public:

    void displayViews()
    {
        cout << "Story Views : " << storyViews << endl;
    }
};

int main()
{
    SponsoredStory s1;

    s1.displayViews();

    return 0;
}
