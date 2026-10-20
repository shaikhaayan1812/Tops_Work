import math

weight = float(input("Enter weight in kg: "))
height = float(input("Enter height in meters: "))

bmi = weight / math.pow(height, 2)

print("Your BMI:", round(bmi, 2))