#include <iostream>
#include <iomanip>
using namespace std;

void showMenu() {
    cout << "\n====================================\n";
    cout << "            ATM MENU                \n";
    cout << "====================================\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
    cout << "====================================\n";
    cout << "Enter your choice (1-4): ";
}

int main() {
    int choice;
    double balance = 1000.00; // Starting default balance
    double amount;

    cout << fixed << setprecision(2);

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n💰 Current Balance: $" << balance << endl;
                break;
            case 2:
                cout << "\nEnter deposit amount: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "✅ Successfully deposited $" << amount << endl;
                    cout << "💰 Updated Balance: $" << balance << endl;
                } else {
                    cout << "❌ Invalid deposit amount!" << endl;
                }
                break;
            case 3:
                cout << "\nEnter withdrawal amount: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "❌ Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "❌ Invalid withdrawal amount!" << endl;
                } else {
                    balance -= amount;
                    cout << "✅ Successfully withdrew $" << amount << endl;
                    cout << "💰 Remaining Balance: $" << balance << endl;
                }
                break;
            case 4:
                cout << "\nThank you for using our ATM. Goodbye! 👋" << endl;
                break;
            default:
                cout << "\n❌ Invalid choice! Please select between 1 and 4." << endl;
        }
    } while (choice != 4);

    return 0;
}
