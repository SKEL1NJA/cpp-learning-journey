#include<iostream>
using namespace std;

class Node{   // User-Defined data type
public:
    int val;
    Node *next, *prev;
    Node(int val){
        this->val = val;
        this->next=NULL;
        this->prev = NULL;
    }
};

class Deque{
public:
    Node *head, *tail;
    int s;
    Deque(){
        head = tail = NULL;
        s = 0;
    }

    int size(){
        return s;
    }

    bool empty(){
        if(s==0)
            return true;
        return false;
    }

    void pushBack(int data){
        Node *temp = new Node(data);
        if(s==0)
            head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        s++;
    }

    void pushFront(int data){
        Node *temp = new Node(data);
        if(s==0)
            head = tail = temp;
        else{
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        s++;
    }

    void popFront(){
        if(s==0)
            cout << "Empty Queue" << endl;
        else if(s==1){
            head = tail = NULL;
            s--;
        }
        else{
            head = head->next;
            head->prev = NULL;
            s--;
        }
    }

    void popBack(){
        if(s==0)
            cout << "Empty Queue" << endl;
        else if(s==1){
            head = tail = NULL;
            s--;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
            s--;
        }
    }

    int getFront(){
        if(s==0){
            cout << "Empty Queue" << endl;
            return -1;
        }
        return head->val;
    }

    int getBack(){
        if(s==0){
            cout << "Empty Queue" << endl;
            return -1;
        }
        return tail->val;
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
// Can also use built in deque
int main(){
    Deque dq;

    cout << dq.empty() << endl; // 1

    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushFront(40);
    dq.pushFront(50);
    dq.pushFront(60);

    cout << dq.size() << endl; // 6
    dq.display(); // 60 50 40 10 20 30

    dq.popBack();
    dq.popFront();

    dq.display(); // 50 40 10 20
    cout << dq.size() << endl; // 4

    cout << dq.getBack() << endl; // 20
    cout << dq.getFront() << endl; // 50
    cout << dq.empty() << endl; // 0
}