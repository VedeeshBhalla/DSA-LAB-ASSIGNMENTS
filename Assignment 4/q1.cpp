#include<bits/stdc++.h>
using namespace std;
#define SIZE 5

class Queue{

    int arr[SIZE];
    int front , end;

    public:
    Queue(){
        front = -1;
        end = -1;
    }

    bool isEmpty(){
        return (front==-1);
    }

    bool isFull(){
        return (end==SIZE -1);
    }

    void enqueue(int value){
        if(isFull()){
            cout << "Queue is Full , cannot insert" <<endl;
            return;
        }

        if (front==-1){
            front = 0;
        }
        end++;  
        arr[end] = value;
        cout << value <<" inserted" <<endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue is Empty , cannot delete" <<endl;
            return;
        }
        
        if(front==end){
            front = end = -1;
        }
        else{
            front++;
        }

    }

    void peek(){
        if(isEmpty()){
            cout << "Queue is Empty!!" <<endl;
        }
        else{
            cout << "Front Element is : " <<arr[front] <<endl;
        }
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is Empty!!" <<endl;
            return;
        }

        cout << "Queue elements : ";
        for(int i = front ; i<=end ; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};
int main(){
    Queue q;
    int choice , value;

    do{
        cout << "\n----- MENU -----" << endl;
        cout << "1. Enqueue (Insert)" << endl;
        cout << "2. Dequeue (Remove)" << endl;
        cout << "3. Peek (Front element)" << endl;
        cout << "4. Display" << endl;
        cout << "5. Check if Empty" << endl;
        cout << "6. Check if Full" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert : ";
            cin >> value;
            q.enqueue(value);
            break;
        
        case 2:
            q.dequeue();
            break;

        case 3:
            q.peek();
            break;

        case 4:
            q.display();
            break;

        case 5:
            if(q.isEmpty()){
                cout << "Queue is Empty" <<endl;
            }
            else{
                cout << "Queue is NOT Empty" <<endl;
            }
            break;
        case 6:
            if (q.isFull())
                cout << "Queue is FULL." << endl;
            else
                cout << "Queue is NOT full." << endl;
            break;
        default:
            break;
        }
    }while(choice!=0);
    return 0;
}