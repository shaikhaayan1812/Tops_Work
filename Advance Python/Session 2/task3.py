# file = open("orders.txt", "w")

# file.write("Pizza - rs250\n")
# file.write("Burger - rs180\n")
# file.write("Biryani - rs220\n")
# file.write("Sandwich - rs150\n")
# file.write("Pasta - rs200\n")

# file.close()

file = open("orders.txt", "r")

while True:
    line = file.readline()

    if line == "":
        break

    print("Order:", line.strip())
    print("File pointer position:", file.tell())
    print()

file.close()