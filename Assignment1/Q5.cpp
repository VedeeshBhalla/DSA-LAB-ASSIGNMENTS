#include<bits/stdc++.h>
using namespace std;

void inputArray(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
}

void displayArray(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void sumRows(int a[10][10], int r, int c) {
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }
}

void sumCols(int a[10][10], int r, int c) {
    for (int j = 0; j < c; j++) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += a[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }
}

int main() {
    int a[10][10], r, c;
    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;
    cout << "Enter elements:" << endl;
    inputArray(a, r, c);

    cout << "Array:" << endl;
    displayArray(a, r, c);

    cout << "Sum of each row:" << endl;
    sumRows(a, r, c);

    cout << "Sum of each column:" << endl;
    sumCols(a, r, c);

    return 0;
}
