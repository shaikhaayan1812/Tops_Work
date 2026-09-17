# Create a basic calculator program that takes two numbers and an operator (+, -, *, /) as input, performs the correct operation using typecasting, and prints the result. If the user enters an invalid operator, print an error message.

num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

operator = input("Enter operator (+, -, *, /): ")

if operator == "+":
    print("Result:", num1 + num2)

elif operator == "-":
    print("Result:", num1 - num2)

elif operator == "*":
    print("Result:", num1 * num2)

elif operator == "/":
    if num2 != 0:
        print("Result:", num1 / num2)
    else:
        print("Error: Cannot divide by zero")

else:
    print("Error: Invalid operator")