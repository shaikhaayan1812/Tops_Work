# Session 8 - Strings
# Task 3 - Reverse without reversed() or [::-1]

def reverse_message(message):
    result = ""
    for character in message:
        result = character + result
    return result

print(reverse_message("Hello Ayan"))
