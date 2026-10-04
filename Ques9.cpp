
// Q9. Write a program to subtract two matrices.

#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], sub[2][2];

    cout << "Enter elements of first matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of second matrix: ";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    cout << "Subtraction of two matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Output:
// Enter elements of first matrix: 10 20 30 40
// Enter elements of second matrix: 1 2 3 4
// Subtraction of two matrices:
// 9 18
// 27 36
