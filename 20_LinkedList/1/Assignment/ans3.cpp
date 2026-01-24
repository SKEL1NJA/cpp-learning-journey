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

class LinkedList{
public:
    Node *head;
    Node *tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }   
    // insert (head,tail,idx)
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
    void insertAtTail(int data){
        Node *temp = new Node(data);
        if(size==0)
            head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAt(int idx, int data){
        if(idx<0 || idx>size){
            cout << "Invalid index" << endl;
        }
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

    // delete(head,tail,idx)
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
    void deleteAtTail(){
        if(size==0)
            cout << "Empty list" << endl;
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
    void deleteAt(int idx){
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
    
    // get(idx)
    int get(int idx){
        Node *temp = head;
        for (int i = 1; i <= idx;i++)
            temp = temp->next;
        return temp->val;
    }

    // display function
    void display(){ 
        Node *temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    return 0;
}