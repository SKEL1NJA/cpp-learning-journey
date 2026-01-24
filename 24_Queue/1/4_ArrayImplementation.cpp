#include<iostream>
using namespace std;

class Queue{
public:
    int f;
    int r;
    int arr[5];
    Queue(){
        f = 0;
        r = 0;
    }

    int size(){
        return r - f;
    }

    void push(int val){
        if(r==5){
            cout << "Queue is full" << endl;
            return;
        }
        arr[r] = val;
        r++;
    }

    void pop(){
        if(r-f==0){
            cout << "Empty Queue" << endl;
            return;
        }
        f++;
    }

    int front(){
        if(r-f==0){
            cout << "Empty Queue" << endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(r-f==0){
            cout << "Empty Queue" << endl;
            return -1;
        }
        return arr[r - 1];
    }

    bool empty(){
        if(r-f==0)
            return true;
        return false;
    }

    void display(){
        if(r-f==0){
            cout << "Empty Queue" << endl;
            return;
        }
        for (int i = f; i < r;i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main(){
    Queue q;
    cout << q.size() << endl; // 0
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); // Queue is full
    cout << q.size() << endl;  // 5
    cout << q.front() << endl; // 10
    cout << q.back() << endl;  // 50
    q.display(); // 10 20 30 40 50
    q.pop();
    cout << q.front() << endl; // 20
    q.display(); // 20 30 40 50
    cout << q.empty() << endl; // 0

    return 0;
}