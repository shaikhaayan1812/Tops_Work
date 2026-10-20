import tkinter as tk

root = tk.Tk()
root.title("My Playlist")
root.geometry("400x300")

label = tk.Label(
    root,
    text="Welcome to Your Music Playlist",
    font=("Arial", 14)
)
label.pack(pady=20)

root.mainloop()