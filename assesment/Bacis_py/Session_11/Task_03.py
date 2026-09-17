# Session 11 - Dictionaries
# Task 3 - Display usernames and follower counts

def display_friends(friends):
    for username, followers in friends.items():
        if followers >= 1000000:
            print(f"{username}: {followers / 1000000:.1f}M followers")
        elif followers >= 1000:
            print(f"{username}: {followers / 1000:.1f}K followers")
        else:
            print(f"{username}: {followers} followers")

friends = {"ayan": 2300, "rahul": 1500, "neha": 800}
display_friends(friends)
