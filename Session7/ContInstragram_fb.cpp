#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file("insta_followers.txt");

    string username;
    int count = 0;

    while(file >> username)
    {
        count++;
    }

    file.close();

    cout << "Total Followers : " << count << endl;

    return 0;
}
