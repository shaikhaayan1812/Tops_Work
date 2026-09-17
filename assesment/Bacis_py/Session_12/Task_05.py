


from functools import reduce
prices = [120, 80, 150, 60]
total = reduce(lambda a, b: a + b, prices)

print("Total bill:", total)
