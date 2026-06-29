#include <iostream>
using namespace std;

class PaymentProcessor
{
public:

    // Method 1
    void processPayment(double amount)
    {
        cout << "Payment without coupon" << endl;
        cout << "Final Amount : " << amount << endl;
    }

    // Method 2 (Overloading)
    void processPayment(double amount, string coupon)
    {
        double finalAmount = amount - 100;

        cout << "Payment with coupon : " << coupon << endl;
        cout << "Final Amount : " << finalAmount << endl;
    }
};

int main()
{
    PaymentProcessor p;

    p.processPayment(1000);

    cout << endl;

    p.processPayment(1000, "SAVE100");

    return 0;
}
