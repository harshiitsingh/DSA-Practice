// Prefix Expression Evaluation

// In prefix we start from end of the expression.
// this code is only valid for numbers between 0 to 9
// means numbers given in the expression must be between 0 and 9 or single integer values

#include <bits/stdc++.h>
#include<stack>
#include<math.h> // for exponential
using namespace std;

int prefixEvaluation(string s){
    stack<int> st;

    for(int i = s.length()-1; i>=0; i--){ // since we are traversing from the end of the expression.
        // first cheking s[i] is operand or not.
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0'); // pushing as a integer value
        }
        else{ // if it is operator
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
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

int main()
{
    cout<<prefixEvaluation("-+7*45+20")<<endl;
    return 0;
}