#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt");

    file << "Believer" << endl;
    file << "Perfect" << endl;
    file << "Shape of You" << endl;
    file << "Closer" << endl;
    file << "Levitating" << endl;

    file.close();

    cout << "Songs Saved Successfully.";

    return 0;
}
