#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt", ios::app);

    string song;

    cout << "Enter New Song : ";
    getline(cin, song);

    file << song << endl;

    file.close();

    cout << "Song Added Successfully.";

    return 0;
}
