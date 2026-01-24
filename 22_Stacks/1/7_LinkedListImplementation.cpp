#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

class Stack{
public:
    Node *head;
    int idx;
    Stack(){
        head = NULL;
        idx = -1;
    }

    void push(int val){
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        idx++;
    }

    void pop(){
        if(head==NULL){
            cout << "Empty List" << endl;
            return;
        }
        head = head->next;
        idx--;
    }

    int top(){
        if(head==NULL){
            cout << "Empty List" << endl;
            return -1;
        }
        return head->val;
    }

    int size(){ 
        return idx + 1;
    }

    void print(Node* temp){
        if(temp==NULL)
            return;
        print(temp->next);
        cout << temp->val << " ";
    }
    void display(){
        Node *temp = head;
        print(temp);
        cout << endl;
    }
};

int main(){
    Stack st;
    st.pop(); // Empty List
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.size() << endl; // 3
    st.pop();
    cout << st.top() << endl;  // 20
    cout << st.size() << endl; // 2
    st.push(40);
    st.push(50);
    cout << st.top() << endl; // 50;
    cout << st.size() << endl; // 4
    st.display();

    return 0;
}