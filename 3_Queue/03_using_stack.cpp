// Queue using Stacks
// Approach-1: Using 2 stack and deQueue operation costly.

#include "bits/stdc++.h"
using namespace std;

class que{ // here name queue is colliding with the inbuilt queue. so change name or remove bits/stdc++.h and include iostream
    stack<int> s1;
    stack<int> s2;

    public:
    void push(int x) { s1.push(x); }  // cost is O(1)

    int pop(){ // in worst case, O(n) time
        if(s1.empty() and s2.empty()) {
            cout<<"Queue is empty\n";
            return -1;
        }

        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int topVal = s2.top();
        s2.pop();

        return topVal;
    }

    bool empty(){
        if(s1.empty() and s2.empty()) {
            return true;
        }

        return false;
    }
};

// Approach-2: Using Function Call stack, using only 1 stack
// Here Enqueue costly
// Only change the pop or deQueue function -- doing recursively

    // int pop(){ 
    //         if(s1.empty()) {
    //             cout<<"Queue is empty\n";
    //             return -1;
    //         }

    //         int x = s1.top();
    //         s1.pop();
    //         if(s1.empty()){
    //              return x;
    //         }
    //         int item = pop();
    //         s.push(x);
    //         return item;
    //     }

    // bool empty(){
    //     if(s1.empty()) {
    //         return true;
    //     }

    //     return false;
    // }

int32_t main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<q.pop();
    q.push(5);
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
    cout<<q.pop()<<"\n";
}