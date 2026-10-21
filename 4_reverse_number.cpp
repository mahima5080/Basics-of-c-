#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum;

    cout << "Enter an integer: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    cout << "Reversed Number of " << originalNum << " is: " << reversedNum << endl;

    return 0;
}
