/* File handling
Build a program that:
? Writes daily goals to a file
? Reads and displays them on program restart
? Uses correct file modes */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string goal;
    int choice;

    cout << "=== Daily Goals Manager ===" << endl;

    // Read existing goals
    ifstream readFile("goals.txt", ios::in);

    if (readFile.is_open()) {
        cout << "\nPrevious Goals:\n";
        while (getline(readFile, goal)) {
            cout << "- " << goal << endl;
        }
        readFile.close();
    }

    cout << "\n1. Add New Goal" << endl;
    cout << "2. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        ofstream writeFile("goals.txt", ios::app);

        if (writeFile.is_open()) {
            cout << "\nEnter your daily goal: ";
            getline(cin, goal);

            writeFile << goal << endl;
            writeFile.close();

            cout << "Goal saved successfully!" << endl;
        } else {
            cout << "Error opening file!" << endl;
        }
    }

    return 0;
}
