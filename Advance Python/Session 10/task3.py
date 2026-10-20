import tkinter as tk

root = tk.Tk()
root.title("Music Controls")
root.geometry("350x200")

tk.Button(root, text="Like", width=15).grid(row=0, column=0, padx=10, pady=10)
tk.Button(root, text="Share", width=15).grid(row=0, column=1, padx=10, pady=10)
tk.Button(root, text="Download", width=15).grid(row=1, column=0, padx=10, pady=10)
tk.Button(root, text="Add to Queue", width=15).grid(row=1, column=1, padx=10, pady=10)

root.mainloop()