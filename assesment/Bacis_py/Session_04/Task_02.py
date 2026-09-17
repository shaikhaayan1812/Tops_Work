# Session 4 - Conditional Statements

marks = float(input("Enter your marks:"))
if marks < 0 or marks > 100:
    print("Invalid marks")
elif marks >= 90:
    print("A")
elif marks >= 75:
    print("B")
elif marks >= 60:
    print("C")
elif marks >= 40:
    print("D")
else:
    print("F")
