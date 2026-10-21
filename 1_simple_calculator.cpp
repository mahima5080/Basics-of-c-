#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2;

    cout << "====================================\n";
    cout << "       SIMPLE C++ CALCULATOR        \n";
    cout << "====================================\n";
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "\nResult: ";
    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is undefined." << endl;
            }
            break;
        default:
            cout << "Invalid operator selected!" << endl;
    }

    return 0;
}
