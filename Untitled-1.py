



def show_balance():
    print(f"Your current balance is: ${balance:.2f}")
def deposit():
    global balance
    amount = float(input("Enter the amount to deposit: "))
    if amount > 0:
        balance += amount
        print(f"${amount:.2f} deposited successfully.")
    else:
        print("Invalid deposit amount. Please enter a positive value.")
def withdraw():
    global balance
    amount = float(input("Enter the amount to withdraw: "))
    if 0 < amount <= balance:
        balance -= amount
        print(f"${amount:.2f} withdrawn successfully.")
    else:
        print("Invalid withdrawal amount or insufficient funds.")
def main():
    global balance
    balance = 0
    is_running = True
    while is_running:
        print("----------------")
        print("banking app menu")
        print("----------------")
        print("1. Show balance")
        print("2. Deposit")
        print("3. Withdraw")
        print("4. Exit")
        print("----------------")
        choice = input("Enter your choice (1-4): ")
        print("----------------")
        if choice == "1":
            show_balance()
        elif choice == "2":
            deposit()
        elif choice == "3":
            withdraw()
        elif choice == "4":
            is_running = False
            print("Exiting the banking app. Goodbye!")
        else:
            print("Invalid choice. Please try again.")
if __name__ == "__main__":
    main()