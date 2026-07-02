/* Loops + Arrays
Create a program that:
 Accepts 7 days of screen time data
 Calculates and prints:
 Total screen time
 Average screen time
 Displays a warning if average exceeds healthy limit */

#include <iostream>
using namespace std;

int main() {
    float screenTime[7];
    float total = 0, average;

    cout << "=== Weekly Screen Time Tracker ===" << endl;

    // Input screen time for 7 days
    for (int i = 0; i < 7; i++) {
        cout << "Enter screen time for Day " << (i + 1) << " (in hours): ";
        cin >> screenTime[i];
        total += screenTime[i];
    }

    // Calculate average
    average = total / 7;

    // Display results
    cout << "\n===== Report =====" << endl;
    cout << "Total Screen Time: " << total << " hours" << endl;
    cout << "Average Screen Time: " << average << " hours/day" << endl;

    // Healthy limit check (4 hours/day)
    if (average > 4) {
        cout << "Warning: Your average screen time exceeds the healthy limit of 4 hours/day!" << endl;
    } else {
        cout << "Good job! Your screen time is within the healthy limit." << endl;
    }

    return 0;
}
