import random

song_list = [
    "295",
    "So High",
    "Insane",
    "The Last Ride",
    "Levels"
]

random.shuffle(song_list)

print("Your Shuffled Playlist:")

for song in song_list:
    print(song)