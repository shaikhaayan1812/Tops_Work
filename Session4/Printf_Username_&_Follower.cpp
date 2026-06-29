#include <iostream>
using namespace std;

// Base Class
class SocialMediaUser
{
public:
    string username;
    int followers;

    // Profile display function
    void displayProfile()
    {
        cout << "Username : " << username << endl;
        cout << "Followers : " << followers << endl;
    }
};

int main()
{
    SocialMediaUser user;

    user.username = "Ayan";
    user.followers = 5000;

    user.displayProfile();

    return 0;
}
