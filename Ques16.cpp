
// Q16. Write a program to count the number
// of occurrences of a given element in an array
// (Linear Search).

#include <iostream>
using namespace std;

int main() {
    int arr[5], search, count = 0;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            count++;
        }
    }

    cout << "Number of occurrences: " << count;

    return 0;
}

// Output:
// Enter 5 elements: 10 20 10 30 10
// Enter element to search: 10
// Number of occurrences: 3
