
// Q1. Write a program to input and
// display elements of a 1D array.

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Array elements are: ";

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Output:
// Enter 5 elements: 10 20 30 40 50
// Array elements are: 10 20 30 40 50
