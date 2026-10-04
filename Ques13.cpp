
// Q13. Write a program to sort names of
// students using Bubble Sort.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5], temp;

    cout << "Enter 5 student names:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> names[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (names[j] > names[j + 1]) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "Names in alphabetical order:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

// Output:
// Enter 5 student names:
// Rahul Aman Priya Neha Karan
// Names in alphabetical order:
// Aman
// Karan
// Neha
// Priya
// Rahul
