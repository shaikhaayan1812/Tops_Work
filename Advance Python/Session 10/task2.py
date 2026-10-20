import tkinter as tk

root = tk.Tk()
root.title("My Playlist")
root.geometry("400x300")

heading = tk.Label(
    root,
    text="Welcome to Your Music Playlist",
    font=("Arial", 14)
)
heading.pack(pady=15)


def play_music():
    status.config(text="Playing")


def pause_music():
    status.config(text="Paused")


def next_song():
    status.config(text="Next Song")


tk.Button(root, text="Play", command=play_music).pack(pady=5)
tk.Button(root, text="Pause", command=pause_music).pack(pady=5)
tk.Button(root, text="Next", command=next_song).pack(pady=5)

status = tk.Label(root, text="Select an action")
status.pack(pady=10)

root.mainloop()