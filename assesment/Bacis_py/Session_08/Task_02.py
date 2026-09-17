# Task 2 - Extract the artist name

def extract_artist(song_title):
    position = song_title.index("-")
    return song_title[position + 1:]

print(extract_artist("Tum Hi Ho - Arijit Singh"))
