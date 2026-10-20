class FoodOrder:
    def __init__(self, restaurant_name, items, total_price):
        self.restaurant_name = restaurant_name
        self.items = items
        self.total_price = total_price

    def show_order(self):
        print("Restaurant:", self.restaurant_name)
        print("Items:", ", ".join(self.items))
        print("Total Price: ₹", self.total_price)


order1 = FoodOrder(
    "Pizza Hut",
    ["Pizza", "Garlic Bread", "Cold Drink"],
    599
)

order1.show_order()