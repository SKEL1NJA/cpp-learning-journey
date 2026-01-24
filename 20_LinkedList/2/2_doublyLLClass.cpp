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

class doublyLL{
public:
    Node *head, *tail;
    int size;
    doublyLL(){
        head = tail = NULL;
        size = 0;
    }

    // Insert at tail
    void insertAtTail(int data){
        Node *temp = new Node(data);
        if(size==0)
            head = tail = temp;
        else{
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    // Insert at head
    void insertAtHead(int data){
        Node *temp = new Node(data);
        if(size==0)
            head = tail = temp;
        else{
            head->prev = temp;
            temp->next = head;
            head = temp;
        }
        size++;
    }

    // Insert at a particular index
    void insertAt(int idx, int data){
        if(idx<0 || idx>size)
            cout << "Invalid index" << endl;
        else if(idx==0)
            insertAtHead(data);
        else if(idx==size)
            insertAtTail(data);
        else{
            Node *temp = new Node(data);
            Node *t = head;
            for (int i = 1; i < idx;i++)
                t = t->next;
            temp->next = t->next;
            t->next = temp;
            temp->prev = t;
            temp->next->prev = temp;
            size++;
        }
    }

    // Delete at head
    void deleteAtHead(){
        if(size==0)
            cout << "Empty List" << endl;
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            head = head->next;
            head->prev = NULL;
            size--;
        }
    }

    // Delete at tail
    void deleteAtTail(){
        if(size==0)
            cout << "Empty List" << endl;
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            tail = tail->prev;
            tail->next = NULL;
            size--;
        }
    }

    // Delete at a particular index
    void deleteAt(int idx){
        if(idx<0 || idx>=size)
            cout << "Invalid Index" << endl;
        else if(size==0)
            deleteAtHead();
        else if(idx==size-1)
            deleteAtTail();
        else{
            Node *temp = head;
            for (int i = 1; i < idx;i++)
                temp = temp->next;
            temp->next = temp->next->next;
            temp->next->prev = temp;
            size--;
        }
    }

    // Get value at a particular index
    int getValueAt(int idx){
        if(idx<0 || idx>=size){
            cout << "Invalid Index";
            return -1;
        }
        else if(idx==0)
            return head->val;
        else if(idx==size-1)
            return tail->val;
        else{
            if(idx<size/2){
                Node *temp = head;
                for (int i = 1; i <= idx;i++)
                    temp = temp->next;
                return temp->val;
            }
            else{
                Node *temp = tail;
                for (int i = 1; i < (size-idx);i++)
                    temp = temp->prev;
                return temp->val;
            }
        }
    }

    // display and display reverse
    void display(){
        Node *temp = head;
        while(temp){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void displayRev(){
        Node *temp = tail;
        while(temp){
            cout << temp->val << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

};

int main(){
    doublyLL ll;

    ll.insertAtTail(10);  // {10}
    ll.insertAtTail(20); // {10 20}
    ll.insertAtTail(30); // {10 20 30}
    ll.insertAtTail(40); // {10 20 30 40}

    ll.insertAtHead(15); // {15 10 20 30 40}
    ll.insertAtHead(21); // {21 15 10 20 30 40}

    ll.insertAt(3, 56); // {21 15 10 56 20 30 40}

    ll.deleteAtHead(); // {15 10 56 20 30 40}
    ll.deleteAtTail(); // {15 10 56 20 30}
    ll.deleteAt(2); // {15 10 20 30}

    ll.display();
    ll.displayRev();

    cout << ll.getValueAt(3) << endl;

    return 0;
}