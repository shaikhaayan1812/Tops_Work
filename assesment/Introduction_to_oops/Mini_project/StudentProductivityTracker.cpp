/* Mini Project: Student Productivity Tracker
Objective
Build a console-based Student Productivity Tracker that logs daily study hours and
generates a weekly report.
Your application must:
1. Menu-driven program
2. Log daily study hours
3. Generate weekly report
4. Store data using files */



#include <iostream>   // cin aur cout use karne ke liye
#include <fstream>    // File me data save aur read karne ke liye
#include <string>     // string datatype use karne ke liye

using namespace std;  // std:: baar-baar na likhna pade

// Function: Daily study hours ko file me save karega
void logStudyHours()
{
    string day;       // Day store karne ke liye (Monday, Tuesday...)
    float hours;      // Study hours store karne ke liye

    cout << "\nEnter Day (e.g., Monday): ";   // User se day lena
    cin >> day;                               // Day input lena

    cout << "Enter Study Hours: ";            // Study hours puchna
    cin >> hours;                             // Hours input lena

    ofstream file("study_log.txt", ios::app); // File open karna (Append Mode)

    if (file.is_open())                       // Check file open hui ya nahi
    {
        file << day << " " << hours << endl;  // File me data save karna
        file.close();                         // File close karna
        cout << "Study hours logged successfully!\n"; // Success message
    }
    else
    {
        cout << "Error opening file!\n";      // Agar file open na ho
    }
}

// Function: Weekly report banane ke liye
void generateReport()
{
    ifstream file("study_log.txt");           // File read mode me open

    if (!file)                               // Agar file exist nahi karti
    {
        cout << "\nNo study data found!\n";
        return;                              // Function yahin khatam
    }

    string day;                              // Day read karne ke liye
    float hours;                             // Hours read karne ke liye
    float totalHours = 0;                    // Total hours calculate karne ke liye
    int daysCount = 0;                       // Kitne records hain uska count

    cout << "\n===== Weekly Study Report =====\n";

    while (file >> day >> hours)             // Jab tak file me data hai
    {
        cout << day << " : " << hours << " hours\n"; // Record print karo

        totalHours += hours;                 // Total hours add karo

        daysCount++;                         // Record count badhao
    }

    file.close();                            // File close karo

    cout << "-----------------------------\n";

    cout << "Total Study Hours: "
         << totalHours << endl;              // Total hours print

    if (daysCount > 0)                       // Divide by zero se bachne ke liye
    {
        cout << "Average Study Hours: "
             << totalHours / daysCount
             << " hours/day\n";              // Average calculate karo
    }

    if (totalHours >= 35)                    // Agar total 35 ya usse jyada
    {
        cout << "Excellent Productivity!\n";
    }
    else if (totalHours >= 20)               // Agar total 20 se 34 ke beech
    {
        cout << "Good Progress\n";
    }
    else                                     // Agar total 20 se kam
    {
        cout << "Need More Focus\n";
    }
}

// Function: File me save data dekhne ke liye
void viewLogs()
{
    ifstream file("study_log.txt");          // File read mode me open

    if (!file)                               // Agar file nahi mili
    {
        cout << "\nNo study records found!\n";
        return;
    }

    string day;                              // Day read karne ke liye
    float hours;                             // Hours read karne ke liye

    cout << "\n===== Study Logs =====\n";

    while (file >> day >> hours)             // Ek-ek record read karo
    {
        cout << day << " : "
             << hours << " hours\n";         // Record print karo
    }

    file.close();                            // File close karo
}

// Main Function (Program yahan se start hota hai)
int main()
{
    int choice;                              // Menu choice store karne ke liye

    do                                       // Menu repeat hoga
    {
        cout << "\n================================";
        cout << "\n Student Productivity Tracker";
        cout << "\n================================";

        cout << "\n1. Log Daily Study Hours";   // Option 1
        cout << "\n2. View Study Logs";         // Option 2
        cout << "\n3. Generate Weekly Report";  // Option 3
        cout << "\n4. Exit";                    // Option 4

        cout << "\nEnter your choice: ";
        cin >> choice;                         // User ki choice lena

        switch (choice)                       // Choice check karna
        {
            case 1:
                logStudyHours();              // Function call
                break;                        // Switch se bahar

            case 2:
                viewLogs();                   // Function call
                break;

            case 3:
                generateReport();             // Function call
                break;

            case 4:
                cout << "\nThank you for using Student Productivity Tracker!\n";
                break;

            default:
                cout << "\nInvalid choice! Try again.\n"; // Wrong input
        }

    } while (choice != 4);                    // Jab tak Exit na ho menu repeat

    return 0;                                 // Program successfully end
}


