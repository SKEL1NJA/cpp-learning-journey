#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class Queue{
public:
    Node *head;
    Node *tail;
    int s;
    Queue(){
        head = tail = NULL;
        s = 0;
    }

    int size(){
        return s;
    }

    void push(int data){
        Node *temp = new Node(data);
        if(s==0)
            head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        s++;
    }

    void pop(){
        if(s==0){
            cout << "Empty Queue" << endl;
        }
        else if(s==1){
            Node *temp = head;
            head = tail = NULL;
            s--;
            delete (temp);
        }
        else{
            Node *temp = head;
            head = head->next;
            s--;
            delete (temp);
        }
    }

    int front(){
        if(s==0){
            cout << "Empty Queue" << endl;
            return -1;
        }
        return head->val;
    }

    int back(){
        if(s==0){
            cout << "Empty Queue" << endl;
            return -1;
        }
        return tail->val;
    }

    bool empty(){
        if(s==0)
            return true;
        return false;
    }

    void display(){
        Node *temp = head;
        while(temp){
            cout << temp->val << " ";
            temp = temp->next;
        }
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