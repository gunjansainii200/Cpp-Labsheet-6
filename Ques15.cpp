
// Q15. Write a program to search an element
// in a 1D array using Binary Search.

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int search, low = 0, high = 4, mid;
    int found = 0;

    cout << "Enter element to search: ";
    cin >> search;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            found = 1;
            break;
        }
        else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found == 1) {
        cout << "Element found at position " << mid + 1;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}

// Output:
// Enter element to search: 30
// Element found at position 3
