#include <iostream> 
#include <string>
using namespace std;
double withdraw(double balance) {
    double amount;
    cout << "How much would you like to withdraw? ";
    cin >> amount;

    if (amount > 0 && amount <= balance)
        balance = balance - amount;
    else
        cout << "Invalid withdrawal amount!" << endl;

    return balance;
}
double deposit(double balance) {
    double amount;
    cout << "How much would you like to deposit? ";
    cin >> amount;

    if (amount > 0)
        balance = balance + amount;
    else
        cout << "Invalid deposit amount!" << endl;

    return balance;
}
void view(double balance) { cout << "Your current balance is: " << balance << " S.R" << endl; }
void view(string name, double oldBalance, double newBalance) { cout << "Customer name: " << name << endl; cout << "Old Balance: " << oldBalance << " S.R" << endl; cout << "New Balance: " << newBalance << " S.R" << endl; cout << "**********************************" << endl; }
int main() {
    string name; double balance = 10000; double oldBalance; char choice;
    cout << "*** Bank System ***" << endl;

    cout << "Please type your name: ";
    getline(cin, name);

    view(balance);

    do {
        cout << endl;
        cout << "Please choose a task:" << endl;
        cout << "w - withdraw" << endl;
        cout << "d - deposit" << endl;
        cout << "e - exit" << endl;
        cin >> choice;

        oldBalance = balance;

        if (choice == 'w' || choice == 'W') {
            balance = withdraw(balance);
            view(name, oldBalance, balance);
        }
        else if (choice == 'd' || choice == 'D') {
            balance = deposit(balance);
            view(name, oldBalance, balance);
        }
        else if (choice == 'e' || choice == 'E') {
            break;
        }
        else {
            cout << "Error: Invalid choice!!" << endl;
        }

        view(balance);

    } while (choice != 'e' && choice != 'E');

    return 0;
}
