
// Q8. Write a program to add two matrices.

#include <iostream>
using namespace std;

int main() {
    int a[2][2], b[2][2], sum[2][2];

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
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    cout << "Sum of two matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

// Output:
// Enter elements of first matrix: 1 2 3 4
// Enter elements of second matrix: 5 6 7 8
// Sum of two matrices:
// 6 8
// 10 12
