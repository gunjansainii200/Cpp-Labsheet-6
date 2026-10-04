
// Q5. Write a program to input 10 numbers
// in an array and count how many are even and odd.

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int even = 0, odd = 0;

    cout << "Enter 10 numbers: ";

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd;

    return 0;
}

// Output:
// Enter 10 numbers: 1 2 3 4 5 6 7 8 9 10
// Even numbers = 5
// Odd numbers = 5
