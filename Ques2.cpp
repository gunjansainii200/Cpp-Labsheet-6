// Q2. Write a program to find the sum
// of all elements in a 1D array.

#include <iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum of array elements = " << sum;

    return 0;
}

// Output:
// Enter 5 elements: 10 20 30 40 50
// Sum of array elements = 150
