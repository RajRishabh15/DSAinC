import os
import time
import datetime

def curtime():
    print("Current Time:")
    print(datetime.datetime.now())
def alarm():
    print("Alarm")
    print("Set the alarm for:")
    hour=int(input("Enter The Hour(0-24):"))
    minute=int(input("Enter The Minute(0-60):"))
    print("Alarm Set for",hour,":",minute)
    while True:
        if hour==datetime.datetime.now().hour and minute==datetime.datetime.now().minute:
            print("Alarm")
            break
        time.sleep(1)
def main():
    while True:
        print("\n=== Clock App ===")
        print("1. Current Time")
        print("2. Set Alarm")
        print("3. Exit")
        
        choice = input("\nSelect an option (1-3): ")
        
        if choice == "1":
            curtime()
        elif choice == "2":
            alarm()
            #go back to main program after setting the alarm
            return main()
        elif choice == "3":
            print("Thank you for using this app. Goodbye!")
            break
        else:
            print("Invalid choice. Please pick 1, 2, or 3.")

if __name__ == "__main__":
    main()
