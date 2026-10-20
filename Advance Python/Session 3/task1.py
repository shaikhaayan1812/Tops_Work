def get_song_duration(song_name):
    songs = {
        "295": "4:30",
        "Rao sahab retro": "3:10",
        "Naam chale": "2:29",
        "Barsaat": "3:05"
    }

    try:
        return songs[song_name]

    except KeyError:
        print("Song not found on Spotify!")


song = input("Enter song name: ")
duration = get_song_duration(song)

if duration:
    print("Song duration:", duration)