
// Q7. Write a program to input and display
// elements of a 2D array (matrix).

#include <iostream>
using namespace std;

int main() {
    int arr[2][2];

    cout << "Enter 4 elements of the matrix: ";

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "The matrix is:" << endl;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Output:
// Enter 4 elements of the matrix: 10 20 30 40
// The matrix is:
// 10 20
// 30 40
