#include<bits/stdc++.h>
using namespace std;

class MinHeap{
public:
    vector<int> heap;
    MinHeap(){
        heap.push_back(INT_MIN);
    }
    // Inserting Element
    void push(int x){
        heap.push_back(x);
        int i = heap.size() - 1;
        while(i > 1 && heap[i]<heap[i/2]){
            swap(heap[i], heap[i / 2]);
            i = i / 2;
        }
    }
    // Removing Minimum Element
    void pop(){
        if(heap.size()==1) // Empty heap
            return;
        heap[1] = heap.back(); // copying last element to top element
        heap.pop_back(); // removing last element
        int i = 1;
        int n = heap.size() - 1;
        while(true){ // assuming top element is smallest
            int lChild = 2 * i, rChild = 2 * i + 1;
            int smallest = i;
            if(lChild<=n && heap[lChild] < heap[smallest])
                smallest = lChild;
            if(rChild<=n && heap[rChild] < heap[smallest])
                smallest = rChild;
            if(smallest == i)
                break;
            swap(heap[i], heap[smallest]);
            i = smallest;
        }
    }
    // Accessing top element
    int top(){
        if(heap.size()==1)
            return INT_MIN;
        return heap[1];
    }
    int size(){
        return heap.size() - 1;
    }
    void display(){
        for (int i = 1; i < heap.size();i++)
            cout << heap[i] << " ";
        cout << endl;
    }
};

int main(){
    MinHeap h;
    h.pop();
    h.push(10);
    h.push(20);
    h.push(11);
    h.push(30);
    h.push(7);
    h.push(12);
    h.push(16);
    h.push(31);
    h.display();
    cout<<h.top()<<endl; 
    h.pop();
    cout<<h.top()<<endl;
    h.display();

    return 0;
}