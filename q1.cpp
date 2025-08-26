#include<bits/stdc++.h>
using namespace std;
#define MAX 100

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        else{
            top = top + 1;
            arr[top] = x;
        }
        
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        else{
            top = top - 1;
        }
        
    }

    bool isEmpty() {
        if(top==-1)
        return true;
        else
        return false;
    }

    bool isFull() {
        if(top==MAX-1)
        return true;
        else{
            return false;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is Empty!" << endl;
            return;
        }
        cout << "Top element is: " << arr[top] << endl;
    }
};

int main() {
    Stack s;
    int choice, val;

    do {
        cout << "\n----- Menu -----" << endl;
        cout << "1. push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. isFull()" << endl;
        cout << "5. display()" << endl;
        cout << "6. peek()" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Value to be pushed: ";
                cin >> val;
                s.push(val);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                if (s.isEmpty())
                    cout << "Stack is Empty!" << endl;
                else
                    cout << "Stack is NOT Empty!" << endl;
                break;
            case 4:
                if (s.isFull())
                    cout << "Stack is Full!" << endl;
                else
                    cout << "Stack is NOT Full!" << endl;
                break;
            case 5:
                s.display();
                break;
            case 6:
                s.peek();
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while(choice != 7);

    return 0;
}
