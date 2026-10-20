class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email


user1 = User("yuvraj", "yuvraj@gmail.com")

print("Username:", user1.username)
print("Email:", user1.email)