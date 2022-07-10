/* 
Stack Data Structure - Introduction

Stack is a linear data structure which stores a list of items
in which an item can be added to or removed from the list only at one end.

Therefore, it is based on LIFO (Last In First Out) mechanism.

Most used Operations of Stack are:
push(x): to insert any element in the stack
pop(): removes the top most element from the stack
top(): returns the topmost element
empty(): checks if the stack is empty or not

// These all operations are done in constant time i.e., O(1).

-- initially top is -1 means stack is empty
*/

// ARRAY IMPLEMENTATION OF STACK

#include<iostream>
using namespace std;

#define n 100

class stack{
    int *arr; // dynamically created
    int top;

    public:
    stack(){ // constructor
        arr = new int [n]; // allocating memory to array
        top=-1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop(){

        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        
        top--;
    }

    int Top(){ // since data member and member function was same
        if(top==-1){
            cout<<"No element in Stack"<<endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;

    return 0;
}