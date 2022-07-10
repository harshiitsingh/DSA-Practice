#include <bits/stdc++.h>
#include <stack>
using namespace std;

// bool balancedParanthesis(string s){
//     stack<char> st;

//     for(int i = 0; i < s.length(); i++){
//         if(s[i] == '{' || s[i] == '[' || s[i] == '('){
//             st.push(s[i]);
//         }
//         else if(s[i] == '}'){
//             if(st.top() == '{'){
//                 st.pop();
//             }
//             else{
//                 return false;
//             }
//         }
//         else if(s[i] == ')'){
//             if(st.top() == '('){
//                 st.pop();
//             }
//             else{
//                 return false;
//             }
//         }
//         else if(s[i] == ']'){
//             if(st.top() == '['){
//                 st.pop();
//             }
//             else{
//                 return false;
//             }
//         }
//     }
//     return true;
// }

bool isValid(string s){
    int n = s.size();
    stack<char> st;
    bool ans = true;

    for(int i=0; i<n; i++){
        if(s[i] == '{' or s[i] == '(' or s[i] == '['){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!st.empty() and st.top() == '('){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() and s[i] == ']'){
            if(st.top() == '['){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
        else if(!st.empty() and s[i] == '}'){
            if(st.top() == '{'){
                st.pop();
            }
            else{
                ans = false;
                break;
            }
        }
    }

    if(!st.empty()){
        return false;
    }

    return ans;
}

int main()
{
    // cout<<balancedParanthesis("[(]")<<endl; // difference b/w 's' and "s", cuz parameter as 's' is showing error here.

    // or
    // string s = "{[()]}";
    // string s = "{([]})";
    string s = "{([]";

    if(isValid(s)) {
        cout<<"Valid String"<<endl;
    }
    else{
        cout << "Invalid String" << endl;
    }
    return 0;
}