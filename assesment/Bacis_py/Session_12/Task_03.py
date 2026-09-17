# Session 12 - Functions and Lambda
# Task 3 - Convert minutes to seconds

durations = [3, 4, 5, 2]
seconds = list(map(lambda minutes: minutes * 60, durations))
print(seconds)
