
// Q12. Write a program to sort an array
// using Bubble Sort in descending order.

#include <iostream>
using namespace std;

int main() {
    int arr[5], temp;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array in descending order: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

// Output:
// Enter 5 elements: 50 20 40 10 30
// Array in descending order: 50 40 30 20 10
