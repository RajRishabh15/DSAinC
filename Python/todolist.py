# A beginner project using only core Python (no libraries)

def todolist():
    tasks = []  # This list will store our tasks
    
    while True:
        # User Interface
        print("\n=== To Do List App ===")
        print("1. Add a New Task")
        print("2. View All Tasks")
        print("3. Delete a Task")
        print("4. Close App")
        
        choice = input("\nSelect an option (1-4): ")
        
        # 1. ADDING A TASK
        if choice == "1":
            new_task = input("What needs to be done? ")
            tasks.append(new_task)
            print("Success: Task added to the list!")
            
        # 2. VIEWING TASKS
        elif choice == "2":
            if len(tasks) == 0:
                print("Your list is currently empty.")
            else:
                print("\n--- Your Current Tasks ---")
                # Using a loop to show numbers (1, 2, 3...) next to tasks
                for i in range(len(tasks)):
                    print(f"{i + 1}. {tasks[i]}")
                    
        # 3. DELETING A TASK
        elif choice == "3":
            if len(tasks) == 0:
                print("Nothing to delete.")
            else:
                try:
                    # Asking for the number instead of typing the whole task
                    num = int(input("Enter the task number to delete: "))
                    if 1 <= num <= len(tasks):
                        removed = tasks.pop(num - 1) # Subtract 1 because list starts at 0
                        print(f"Deleted: '{removed}'")
                    else:
                        print("Error: That task number doesn't exist.")
                except ValueError:
                    print("Error: Please type a number (e.g., 1, 2, 3).")
                    
        # 4. EXITING
        elif choice == "4":
            print("Thank you for using this App. Goodbye!")
            break
            
        # INVALID INPUT
        else:
            print("Invalid choice. Please pick 1, 2, 3, or 4.")

# This line ensures the app starts as soon as you run the script
if __name__ == "__main__":
    todolist()