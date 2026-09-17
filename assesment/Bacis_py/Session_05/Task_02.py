# Session 5 - For Loop
# Task 2 - Count characters except spaces (includes | symbols)

user_bio = "Music lover | Foodie | Traveller"
count = 0
for character in user_bio:
    if character != " ":
        count = count + 1
print("Characters without spaces:", count)
