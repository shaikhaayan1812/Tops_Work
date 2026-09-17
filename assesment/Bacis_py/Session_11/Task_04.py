# Session 11 - Dictionaries
# Task 4 - Keys, values and items

food_order = {"Pizza": 2, "Burger": 1, "Fries": 3}
print("Food items:", food_order.keys())
print("Quantities:", food_order.values())
for item, quantity in food_order.items():
    print(item, ":", quantity)
