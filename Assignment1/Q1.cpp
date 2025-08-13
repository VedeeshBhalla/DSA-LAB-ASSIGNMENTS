#include <bits/stdc++.h>
using namespace std;

void createMenu() {
    cout << "---Menu---" << endl;
    cout << "1. CREATE" << endl;
    cout << "2. DISPLAY" << endl;
    cout << "3. INSERT" << endl;
    cout << "4. DELETE" << endl;
    cout << "5. LINEAR SEARCH" << endl;
    cout << "6. EXIT" << endl;
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert(int arr[], int &n) {
    int position;
    cout << "Enter the position : ";
    cin >> position;
    int element;
    cout << "Enter the element : ";
    cin >> element;

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;
}

void Delete(int arr[], int &n) {
    int position;
    cout << "Enter the position to delete (0-based): ";
    cin >> position;

    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;
}
void LinearSearch(int arr[], int  &n){

}
int main() {
    int choice;
    int n = 0;
    int capacity = 100;
    int *arr = new int[capacity];

    do {
        createMenu();
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "No of elements in an array: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                break;

            case 2:
                display(arr, n);
                break;

            case 3:
                insert(arr, n);
                break;

            case 4:
                Delete(arr, n);
                break;

            case 5:
                LinearSearch(arr , n);
                break;  

            case 6:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 6);
    return 0;
}
