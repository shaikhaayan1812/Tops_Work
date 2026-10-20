file = open("my_fav_songs.txt", "r")

songs = file.readlines()

line_no = 1

for song in songs:
    print(line_no, song.strip())
    line_no += 1

file.close()