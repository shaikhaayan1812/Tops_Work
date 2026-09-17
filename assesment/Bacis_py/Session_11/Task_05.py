# Session 11 - Dictionaries
# Task 5 - Add an item or replace its existing quantity

def update_cart(cart, item, qty):
    cart[item] = qty
    return cart

cart = {"Mobile": 1, "Mouse": 2}
print(update_cart(cart, "Keyboard", 1))
print(update_cart(cart, "Mouse", 3))
