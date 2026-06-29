#include <iostream>
using namespace std;

// Order details ke liye structure
struct OrderData
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

// FoodOrder class
class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    // Constructor (Object ko parameter me lena)
    FoodOrder(OrderData data)
    {
        orderId = data.orderId;
        restaurantName = data.restaurantName;
        isDelivered = data.isDelivered;
    }

    // Order Delivered function
    void markDelivered()
    {
        isDelivered = true;
        cout << "Order Delivered Successfully!" << endl;
    }

    // Order details display karne ka function
    void display()
    {
        cout << "Order ID : " << orderId << endl;
        cout << "Restaurant : " << restaurantName << endl;

        if(isDelivered)
            cout << "Status : Delivered" << endl;
        else
            cout << "Status : Not Delivered" << endl;
    }
};

int main()      // Program yahan se start hota hai
{
    // Object me values store karna
    OrderData data = {101, "Pizza Hut", false};

    // Object ko constructor me pass karna
    FoodOrder order1(data);

    // Details display karna
    order1.display();

    // Order Delivered karna
    order1.markDelivered();

    // Updated details display karna
    order1.display();

    return 0;
}
