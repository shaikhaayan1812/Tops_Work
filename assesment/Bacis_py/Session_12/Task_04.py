# Session 12 - Functions and Lambda
# Task 4 - Products starting with M

products = ["Mobile", "Mouse", "Laptop", "Monitor", "Keyboard"]
result = list(filter(lambda product: product.startswith("M"), products))
print(result)
