# Session 8 - Strings
# Task 1 - Instagram caption: first 10 characters using indexing

caption = input("Enter your Instagram caption: ")
for index in range(3):
    if index < len(caption):
        print(caption[index], end="")
print()
