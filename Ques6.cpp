
// Q6. Write a program to search an element
// in a 1D array without using functions.

#include <iostream>
using namespace std;

int main() {
    int arr[5], search, found = 0;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        cout << "Element found";
    } else {
        cout << "Element not found";
    }

    return 0;
}

// Output:
// Enter 5 elements: 10 20 30 40 50
// Enter element to search: 30
// Element found
