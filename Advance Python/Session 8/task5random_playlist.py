import random
from task5songs import song_list

random.shuffle(song_list)

print("Your Shuffled Playlist:")

for song in song_list:
    print(song)