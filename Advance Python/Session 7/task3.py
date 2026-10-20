class ZomatoOrder:
    def add_item(self, item_name, quantity=1):
        print("Item:", item_name)
        print("Quantity:", quantity)


order1 = ZomatoOrder()

order1.add_item("Pizza", 5)
print("-----")
order1.add_item("Burger", 3)