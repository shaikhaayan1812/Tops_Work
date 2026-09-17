# Session 7 - Break Continue and Pass


messages = ["Hi", "Spam", "Hello", "Spam", "How are you?"]
for message in messages:
    if message == "Spam":
        continue
    print(message)
    if message == "How are you?":
        break
