#include <iostream>
#include <iomanip>

using namespace std;

// Function to validate PIN
bool validatePin(int enteredPin, int actualPin) {
    return enteredPin == actualPin;
}

// Function to display ATM menu
void displayMenu() {
    cout << "ATM Menu:" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Withdraw Cash" << endl;
    cout << "3. Deposit Cash" << endl;
    cout << "4. Quit" << endl;
}

// Function to handle ATM operations
void performOperations() {
    double balance = 1000.0;
    int pin = 1234;
    int attempts = 3;

    while (attempts > 0) {
        int enteredPin;
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (validatePin(enteredPin, pin)) {
            cout << "PIN accepted." << endl;
            break;
        } else {
            attempts--;
            cout << "Invalid PIN. Please try again." << endl;
            cout << "Attempts remaining: " << attempts << endl;
            if (attempts == 0) {
                cout << "Too many failed attempts. Your card is blocked." << endl;
                return;
            }
        }
    }

    while (true) {
        displayMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: $" << fixed << setprecision(2) << balance << endl;
                break;

            case 2:
                double withdrawalAmount;
                cout << "Enter the amount to withdraw: $";
                cin >> withdrawalAmount;
                if (withdrawalAmount > balance) {
                    cout << "Insufficient balance." << endl;
                } else {
                    balance -= withdrawalAmount;
                    cout << "Withdrawal successful. Remaining balance: $" << fixed << setprecision(2) << balance << endl;
                }
                break;

            case 3:
                double depositAmount;
                cout << "Enter the amount to deposit: $";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Deposit successful. Updated balance: $" << fixed << setprecision(2) << balance << endl;
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return;

            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    }
}

int main() {
    cout << "Welcome to the International ATM Machine!" << endl;
    performOperations();
    return 0;
}
