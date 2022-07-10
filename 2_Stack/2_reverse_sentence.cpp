// Reverse a Sentence using Stacks - one of the application of stack

#include <bits/stdc++.h>
// although we can implement stack using Arrays and Linked List but STL is there
#include <stack>
using namespace std;

void reverseSentence(string s) {
    stack<string> st;

    for(int i=0; i<s.length(); i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop(); // need to pop the element otherwise top element remain the same.
    }cout<<endl;
}

int main()
{
    string s="Hey, how are you doing?";
    reverseSentence(s);
    return 0;
}

// we can also reverse the characters in the string using stack.