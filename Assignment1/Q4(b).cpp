#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr1[1][2] = {{1, 2}};
    int arr2[2][3] = {{5, 6, 7}, {8, 9, 10}};
    int result[1][3] = {0};

    int rows1 = 1, cols1 = 2, rows2 = 2, cols2 = 3;
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible." << endl;
        return 0;
    }
    for(int i=0 ; i<rows1 ; i++){
        for(int j=0 ; j<cols2 ; j++){
            for(int k=0 ; k<cols1 ; k++){
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}