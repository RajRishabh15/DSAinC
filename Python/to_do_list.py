#simple CLI based To Do List App
def todolist():
    tasks = []
    
    while True:
        # User Interface
        print("\n=== To Do List App ===")
        print("1. Add a New Task")
        print("2. View All Tasks")
        print("3. Delete a Task")
        print("4. Save Tasks to CSV")
        print("5. Close App")
        
        choice = input("\nSelect an option (1-5): ")
        
        if choice == "1":
            new_task = input("What needs to be done? ")
            tasks.append(new_task)
            print("Success: Task added to the list!")
            
        elif choice == "2":
            if len(tasks) == 0:
                print("Your list is currently empty.")
            else:
                print("\n--- Your Current Tasks ---")
                for i in range(len(tasks)):
                    print(f"{i + 1}. {tasks[i]}")
                    
        elif choice == "3":
            if len(tasks) == 0:
                print("Nothing to delete.")
            else:
                try:
                    num = int(input("Enter the task number to delete: "))
                    if 1 <= num <= len(tasks):
                        removed = tasks.pop(num - 1)
                        print(f"Deleted: '{removed}'")
                    else:
                        print("Error: That task number doesn't exist.")
                except ValueError:
                    print("Error: Please type a number (e.g., 1, 2, 3).")
        
        elif choice == "4":
            if len(tasks) == 0:
                print("No tasks to save.")
            else:
                try:
                    with open("tasks.csv", "w") as file:
                        file.write("Task\n") 
                        for task in tasks:
                            file.write(f"{task}\n")
                    print("Success: Tasks saved to tasks.csv")
                except Exception as e:
                    print(f"Error saving file: {e}")
        
        elif choice == "5":
            print("Thank you for using this App. Goodbye!")
            break
            
        else:
            print("Invalid choice. Please pick 1, 2, 3, 4, or 5.")

if __name__ == "__main__":
    todolist()