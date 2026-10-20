class User:
    def __init__(self, username, email):
        self.username = username
        self.email = email


class Influencer(User):
    def __init__(self, username, email, followers):
        super().__init__(username, email)
        self.followers = followers


class Brand:
    def __init__(self, brand_name):
        self.brand_name = brand_name


class BrandPartner(Influencer, Brand):
    def __init__(self, username, email, followers, brand_name):
        Influencer.__init__(self, username, email, followers)
        Brand.__init__(self, brand_name)


partner1 = BrandPartner(
    "yuvraj",
    "yuvraj@gmail.com",
    50000,
    "Nike"
)

print("Username:", partner1.username)
print("Followers:", partner1.followers)
print("Brand:", partner1.brand_name)