// Stacking using Queues (Method 2)
// Making pop operation costly

#include<bits/stdc++.h>
using namespace std;

class Stack{
    int N;
    queue<int> q1;
    queue<int> q2;
    
    public:
    Stack(){
        N = 0; // making size of stack initially zero
    }

    void pop(){ // O(n)
        if(q1.empty()){
            return;
        }

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        N--;

        // reversing the queues
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void push(int val){
        q1.push(val);
        N++;
    }

    int top(){
        if(q1.empty()){
            return -1;
        }

        while(q1.size() != 1){
            q2.push(q1.front());
            q1.pop();
        }

        int ans = q1.front();
        q2.push(ans);

        // exchanging the queues
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
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