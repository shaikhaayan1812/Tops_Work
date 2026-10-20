file = open("my_fav_songs.txt", "r")

songs = file.readlines()

total = len(songs)

print("Total songs:", total)

file.close()