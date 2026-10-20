from insta_utils.likes import like_count
from insta_utils.comments import comment_count

likes = 100
comments = 20

likes = like_count(likes, 15)
comments = comment_count(comments, 5)

print("Total Likes:", likes)
print("Total Comments:", comments)