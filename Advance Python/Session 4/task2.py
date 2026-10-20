class SongAlreadyExistsError(Exception):
    pass


def add_song_to_playlist(song_name, playlist):
    if song_name in playlist:
        raise SongAlreadyExistsError("Song already exists in playlist!")

    playlist.append(song_name)
    print("Song added successfully!")


playlist = ["295", "Rao sahab retro", "Barsaat"]

try:
    song = input("Enter song name: ")
    add_song_to_playlist(song, playlist)

except SongAlreadyExistsError as e:
    print(e)

print("Playlist:", playlist)