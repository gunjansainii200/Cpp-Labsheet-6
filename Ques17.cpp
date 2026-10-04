
// Q17. Write a program to check if a given
// number is present in the array or not
// (Linear Search).

#include <iostream>
using namespace std;

int main() {
    int arr[5], search, found = 0;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        cout << "Number is present in the array";
    } else {
        cout << "Number is not present in the array";
    }

    return 0;
}

// Output:
// Enter 5 elements: 10 20 30 40 50
// Enter number to search: 30
// Number is present in the array
