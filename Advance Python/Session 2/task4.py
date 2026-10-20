file = open("my_fav_songs.txt", "r")

file.readline()  # First song
file.readline()  # Second song

third_song = file.readline()

print("Third song:", third_song.strip())

file.close()