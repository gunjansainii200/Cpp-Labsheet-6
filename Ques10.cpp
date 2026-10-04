
// Q10. Write a program to multiply two matrices.

#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], mul[2][2] = {0};

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
            for (int k = 0; k < 2; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Multiplication of two matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Output:
// Enter elements of first matrix: 1 2 3 4
// Enter elements of second matrix: 5 6 7 8
// Multiplication of two matrices:
// 19 22
// 43 50
