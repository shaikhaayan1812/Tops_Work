# Session 5 - For Loop
# Task 4 - Print vowels using == checks

word = input("Enter a word: ")
for character in word:
    letter = character.lower()
    if letter == "a" or letter == "e" or letter == "i" or letter == "o" or letter == "u":
        print(character)
