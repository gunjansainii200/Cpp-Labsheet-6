// Q4. Write a program to reverse a 1D array.

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Reversed array: ";

    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Output:
// Enter 5 elements: 10 20 30 40 50
// Reversed array: 50 40 30 20 10
