#include<bits/stdc++.h>
using namespace std;
void Input( int arr[] , int n){
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}
void Reverse(int arr[], int size){
    for(int i = 0; i < size / 2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    int size = sizeof(arr)/sizeof(int);
    Input(arr, size);
    Reverse(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}