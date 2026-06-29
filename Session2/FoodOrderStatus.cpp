#include <iostream>
using namespace std;

// FoodOrder class
class FoodOrder
{
public:
    int orderId;               // Order ID
    string restaurantName;     // Restaurant ka naam
    bool isDelivered;          // Delivery status

    // Order ko Delivered mark karne ka function
    void markDelivered()
    {
        isDelivered = true;
        cout << "Order Delivered Successfully!" << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    FoodOrder order1;      // Object banana

    // Properties ko value dena
    order1.orderId = 101;
    order1.restaurantName = "Pizza Hut";
    order1.isDelivered = false;

    // Order details print karna
    cout << "Order ID : " << order1.orderId << endl;
    cout << "Restaurant : " << order1.restaurantName << endl;
    cout << "Delivery Status : ";

    if(order1.isDelivered)
        cout << "Delivered" << endl;
    else
        cout << "Not Delivered" << endl;

    // Order ko Delivered mark karna
    order1.markDelivered();

    // Updated status print karna
    cout << "Updated Status : ";

    if(order1.isDelivered)
        cout << "Delivered" << endl;
    else
        cout << "Not Delivered" << endl;

    return 0;
}
