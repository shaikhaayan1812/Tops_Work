#include <iostream>
using namespace std;

// UserProfile Class
class UserProfile
{
private:
    string phoneNumber;      // Private Property

public:

    // Setter
    void setPhoneNumber(string number)
    {
        phoneNumber = number;
    }

    // Getter
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    UserProfile u1;

    u1.setPhoneNumber("9876543210");

    cout << "Phone Number : " << u1.getPhoneNumber() << endl;

    return 0;
}
