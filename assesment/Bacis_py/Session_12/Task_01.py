

def get_discounted_price(price, discount_percent):
    discount = price * discount_percent / 100
    return price - discount

print(get_discounted_price(500, 10))
