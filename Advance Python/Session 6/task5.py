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

    def format_followers(self):
        if self.followers >= 1000000:
            return f"{self.followers / 1000000:.1f}M"
        elif self.followers >= 1000:
            return f"{self.followers / 1000:.1f}K"
        else:
            return str(self.followers)

    def display_profile(self):
        print("Username:", self.username)
        print("Followers:", self.format_followers())
        print("Verified:", "✔" if self.badge else "No")


profile1 = VerifiedInfluencer(
    "yuvraj",
    "yuvraj@gmail.com",
    1500000,
    True
)

profile1.display_profile()