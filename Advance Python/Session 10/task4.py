import tkinter as tk

root = tk.Tk()
root.title("Login Form")
root.geometry("350x250")


def login():
    username = username_entry.get()
    password = password_entry.get()

    if username != "" and password != "":
        message.config(text="Login Successful", fg="green")
    else:
        message.config(text="Please fill in both fields", fg="red")


tk.Label(root, text="Username").pack(pady=5)
username_entry = tk.Entry(root)
username_entry.pack()

tk.Label(root, text="Password").pack(pady=5)
password_entry = tk.Entry(root, show="*")
password_entry.pack()

tk.Button(root, text="Login", command=login).pack(pady=10)

message = tk.Label(root, text="")
message.pack()

root.mainloop()