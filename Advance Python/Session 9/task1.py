import re

email = input("Enter your email: ")

pattern = r"[a-z][a-zA-Z0-9._%+-]*@gmail\.com"

if re.match(pattern, email) and re.fullmatch(pattern, email):
    print("Valid Gmail")
else:
    print("Invalid Gmail")