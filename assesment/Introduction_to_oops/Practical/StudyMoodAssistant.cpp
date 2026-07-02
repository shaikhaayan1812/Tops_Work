/* Conditional Logic Implementation
Design a ?Study Mood Assistant? that:
? Takes user input: hours studied today
? Displays motivation messages based on conditions
? Uses if-else ladder or switch case */

#include <iostream>
using namespace std;

int main() {
    int hours;

    cout << "=== Study Mood Assistant ===" << endl;
    cout << "Enter hours studied today: ";
    cin >> hours;

    switch (hours) {
        case 0:
            cout << "You haven't studied today. Start with just 30 minutes!" << endl;
            break;

        case 1:
        case 2:
            cout << "Good start! Keep building your study habit." << endl;
            break;

        case 3:
        case 4:
            cout << "Great job! You're making solid progress." << endl;
            break;

        case 5:
        case 6:
            cout << "Excellent work! Your dedication is paying off." << endl;
            break;

        default:
            if (hours >= 7)
                cout << "Outstanding! You're a study champion today!" << endl;
            else
                cout << "Invalid input. Please enter a valid number of hours." << endl;
    }

    return 0;
}
