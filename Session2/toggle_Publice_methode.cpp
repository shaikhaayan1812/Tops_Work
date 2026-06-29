#include <iostream>
using namespace std;

// Playlist class
class Playlist
{
public:
    string name;          // Playlist ka naam
    string createdOn;     // Playlist banne ki date
    bool isPublic;        // Public ya Private

    // Public/Private status change karne ka function
    void togglePublic()
    {
        isPublic = !isPublic;
    }

    // Playlist ki details print karne ka function
    void display()
    {
        cout << "Playlist Name : " << name << endl;
        cout << "Created On    : " << createdOn << endl;

        if(isPublic)
            cout << "Status        : Public" << endl;
        else
            cout << "Status        : Private" << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    Playlist p1;      // Object banana

    // Properties ko value dena
    p1.name = "My Songs";
    p1.createdOn = "28-06-2026";
    p1.isPublic = true;

    // Pehli baar display
    cout << "Initial Status:\n";
    p1.display();

    // Pehli baar toggle
    p1.togglePublic();

    cout << "\nAfter First Toggle:\n";
    p1.display();

    // Dusri baar toggle
    p1.togglePublic();

    cout << "\nAfter Second Toggle:\n";
    p1.display();

    return 0;
}
