#include <iostream>
using namespace std;

// Movie class
class Movie
{
public:
    string title;      // Movie ka naam
    int year;          // Release year

    // Parameterized Constructor
    Movie(string t, int y)
    {
        title = t;
        year = y;
    }

    // Copy Constructor
    Movie(const Movie &m)
    {
        title = m.title;
        year = m.year;
    }

    // Movie details display karne ka function
    void display()
    {
        cout << "Movie Name : " << title << endl;
        cout << "Release Year : " << year << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    // Original Object
    Movie m1("Avengers", 2019);

    // Copy Object
    Movie m2 = m1;

    // Original Movie Details
    cout << "Original Movie:" << endl;
    m1.display();

    cout << endl;

    // Copied Movie Details
    cout << "Copied Movie:" << endl;
    m2.display();

    return 0;
}
