// Stack using Queue
/*
Two methods-
    1. Making push method costly
    2. Making pop method costly
*/

#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    
    public:
    Stack(){
        N = 0;
    }

    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        // reversing the queues
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    // size of stack
    int size(){
        return N;
    }
};

int main(){

    Stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    // cout << st.top() << endl;
    // st.pop();

    cout << st.size() << endl;
    return 0;
}