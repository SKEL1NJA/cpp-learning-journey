#include<iostream>
using namespace std;
class Node{  // User-Defined data type
public:
    int val;
    Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{ // User-Defined Data Structure
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // Insert at end
    void insertAtTail(int data){    // TC: O(1), SC: O(1)
        Node *temp = new Node(data);   
        if(size==0)
            head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // Insert at Beginning
    void insertAtHead(int data){
        Node *temp = new Node(data);
        if(size==0)
            head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }

    // Insert at middle
    void insertAt(int data, int idx){
        if(idx<0 || idx>size) cout << "Invalid index" << endl;
        else if(idx==0)
            insertAtHead(data);
        else if(idx==size)
            insertAtTail(data);
        else{
            Node *temp = new Node(data);
            Node *curr = head;
            for (int i = 1; i < idx;i++)
                curr = curr->next;
            temp->next = curr->next;
            curr->next = temp;
            size++;
        }
    }

    // Delete at head
    void deleteAtHead(){
        if(size==0)
            cout << "Empty list" << endl;
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            head = head->next;
            size--;
        }
    }

    // Delete at Tail
    void deleteAtTail(){
        if(size==0)
            cout << "Empty List";
        else if(size==1){
            head = tail = NULL;
            size--;
        }
        else{
            Node *temp = head;
            while(temp->next != tail)
                temp = temp->next;
            temp->next = NULL;
            size--;
        }
    }

    // Delete at a particular index
    void deleteAt(int idx){
        if(size==0){
            cout << "Empty List" << endl;
            return;
        }
        if(idx<0 || idx>size-1)
            cout << "Invalid Index";
        else if(idx==0)
            deleteAtHead();
        else if(idx==size-1)
            deleteAtTail();
        else{
            Node *temp = head;
            for (int i = 1; i < idx;i++)
                temp = temp->next;
            temp->next = temp->next->next;
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
            Node *temp = head;
            for (int i = 1; i <= idx;i++)
                temp = temp->next;
            return temp->val;
        }
    }

    // Print LL
    void display(){  // TC: O(n), SC: O(1)
        Node *temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    LinkedList ll;

    ll.insertAtTail(10);  // {10 -> NULL}
    ll.insertAtTail(20); // {10 -> 20 -> NULL}
    ll.insertAtTail(15); // {10 -> 20 -> 15 -> NULL}

    ll.insertAtHead(26); // {26 -> 10 -> 20 -> 15 -> NULL}
    ll.insertAtHead(49); // {49 -> 26 -> 10 -> 20 -> 15 -> NULL}

    ll.insertAt(12, 2); // {49 -> 26 -> 12 -> 10 -> 20 -> 15 -> NULL}

    ll.display();

    ll.deleteAtHead(); // {26 -> 12 -> 10 -> 20 -> 15 -> NULL}
    ll.display();

    ll.deleteAtTail(); // {26 -> 12 -> 10 -> 20 -> NULL}
    ll.display();

    ll.deleteAt(2);
    ll.display(); // {26 -> 12 -> 20 -> NULL}

    cout << ll.getValueAt(1) << endl;

    cout << ll.size << endl; // 3

    return 0;
}