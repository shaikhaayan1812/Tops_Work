import re

def extract_hashtags(text):
    return re.findall(r"#[A-Za-z0-9_]+", text)


caption = "Enjoying life! #Travel #Ahmedabad #Good_Vibes #Python"

hashtags = extract_hashtags(caption)

print(hashtags)