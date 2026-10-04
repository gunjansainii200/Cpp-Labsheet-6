
// Q20. Write a program to search the largest
// element in a sorted array using Binary Search.

#include <iostream>
using namespace std;

int main() {
    int arr[5], low = 0, high = 4, mid;

    cout << "Enter 5 elements in sorted order: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    while (low < high) {
        mid = (low + high) / 2;

        if (arr[mid] < arr[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    cout << "Largest element: " << arr[low];

    return 0;
}

// Output:
// Enter 5 elements in sorted order: 10 20 30 40 50
// Largest element: 50
