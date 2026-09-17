#  While Loop and Patterns
#  Pyramid with 4 rows

row = 1
while row <= 4:
    space = 1
    while space <= 4 - row:
        print(" ", end="")
        space = space + 1

    star = 1
    while star <= 2 * row - 1:
        print("*", end="")
        star = star + 1

    print()
    row = row + 1
