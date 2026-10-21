#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    double arr[n], sum = 0.0;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = sum / n;

    cout << "\n--- Results ---" << endl;
    cout << "Sum     = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}
