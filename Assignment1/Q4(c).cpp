#include <bits/stdc++.h>
using namespace std;

#define MAX 100

void InputArray(int arr[][MAX], int rows , int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> arr[i][j];
        }
    }
}

void Transpose(int arr[][MAX], int rows , int cols){
    for(int i = 0; i < rows; i++){
        for(int j = i+1; j < cols; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void printArray(int arr[][MAX], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    int arr[MAX][MAX];
    InputArray(arr, n, m);

    Transpose(arr, n, m);
    cout << "Transposed matrix:\n";
    printArray(arr, n, m);

    return 0;
}
