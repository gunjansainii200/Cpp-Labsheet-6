// Q3. Write a program to find the maximum
// and minimum element in a 1D array.

#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min;

    return 0;
}

// Output:
// Enter 5 elements: 25 10 45 5 30
// Maximum element = 45
// Minimum element = 5
