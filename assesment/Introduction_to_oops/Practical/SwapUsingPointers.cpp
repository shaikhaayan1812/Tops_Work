/*Functions & Pointers
Write a program to:
? Swap two numbers using a user-defined function
? Implement swapping using pointers
? Explain why pass-by-reference is necessary here */

#include <iostream>
using namespace std;

// Function to swap two numbers using pointers
void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nBefore Swapping:" << endl;
    
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    swapNumbers(&num1, &num2);

    cout << "\nAfter Swapping:" << endl;
    
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

}
