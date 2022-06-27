// Infix to Postfix

#include<iostream>
#include<stack>
using namespace std;

// a function that tells the precedence of the current operator
int prec(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else{ // means that is not operator
        return -1; // and it will return when there is opening bracket
    }
}

string infixToPostfix(string s){
    stack<char> st;
    string res;

    for(int i=0; i<s.length();i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{ // when operators are coming
            while(!st.empty() && prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }

    while(!st.empty()){
        res+=st.top();
        st.pop();
    }

    return res;
}

int main(){
    cout<<infixToPostfix("(a-b/c)*(a/k-l)")<<endl;
    return 0;
}