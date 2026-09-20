apple = 50
banana = 20
mango = 10


select = int(input("Enter the quantity: "))
item = input("Enter the item name: ")

if item == "apple":
    bill = select * apple
elif item == "banana":
    bill = select * banana
elif item == "mango":
    bill = select * mango
else:
    bill = 0
    print("Item not available")

print("Your bill is:", bill)
