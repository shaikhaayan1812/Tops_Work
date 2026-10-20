class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email


class Influencer(User):
    def __init__(self, username, email, followers):
        super().__init__(username, email)
        self.followers = followers


class VerifiedInfluencer(Influencer):
    def __init__(self, username, email, followers, badge):
        super().__init__(username, email, followers)
        self.badge = badge


verified1 = VerifiedInfluencer(
    "yuvraj",
    "yuvraj@gmail.com",
    150000,
    "Blue Tick"
)

print("Username:", verified1.username)
print("Email:", verified1.email)
print("Followers:", verified1.followers)
print("Badge:", verified1.badge)