// Postfix Expression Evaluation

// // In postfix we start from beginning of the expression to evaluate.

#include <iostream>
#include<stack>
#include<math.h>
using namespace std;

int postfixEvaluation(string s){
    stack<int> st;

    for(int i = 0; i<=s.length()-1; i++){ // since we are traversing from the beginning of the expression.
        // first cheking s[i] is operand or not.
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0'); // pushing as a integer value
        }
        else{ // if it is operator
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;

            case '-':
                st.push(op1-op2);
                break;

            case '*':
                st.push(op1*op2);
                break;
            
            case '/':
                st.push(op1/op2);
                break;

            case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }

    return st.top();
}

int main(){
    cout<<postfixEvaluation("46+2/5*7+")<<endl;

    return 0;
}

// Time complexity is O(L); L is the length of the string