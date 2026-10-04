
// Q19. Write a program to implement Binary
// Search for an array of floating-point numbers.

#include <iostream>
using namespace std;

int main() {
    float arr[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
    float search;
    int low = 0, high = 4, mid;
    int found = 0;

    cout << "Enter number to search: ";
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
// Enter number to search: 3.5
// Element found at position 3
