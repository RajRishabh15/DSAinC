import tkinter as tk
from tkinter import messagebox

def add_task():
    task = entry.get()
    if task:
        listbox.insert(tk.END, task)
        entry.delete(0, tk.END)
    else:
        messagebox.showwarning("Warning", "Task cannot be empty!")

def delete_task():
    try:
        selected_task = listbox.curselection()[0]
        listbox.delete(selected_task)
    except IndexError:
        messagebox.showwarning("Warning", "No task selected!")

app = tk.Tk()
app.title("To-Do List")
app.geometry("400x400")
app.configure(bg="black")
entry = tk.Entry(app, width=40)
entry.pack(pady=20)

add_button = tk.Button(app, text="Add Task", command=add_task)
add_button.pack(pady=20)

delete_button = tk.Button(app, text="Delete Task", command=delete_task)
delete_button.pack(pady=20)

listbox = tk.Listbox(app, width=50, height=10)
listbox.pack(pady=20)

app.mainloop()