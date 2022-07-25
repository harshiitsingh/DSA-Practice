#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // TUTORIAL 8 --> CONSTANTS, MANIPULATORS AND OPERATOR PRECEDENCE

    // Constants in c++
    int a = 3;
    cout<<"a is "<<a<<endl;
    a = 6;
    cout<<"new a is "<<a<<endl;

    const int b = 5;
    cout<<"The value of b was "<<b<<endl;
    // b = 10;
    // cout<<"The value of b is "<<b<<endl; // --> throw error becoz b is a constant

    // MANIPULATORS
    // endl is also a manipulator
    int d = 3, e = 56, f = 1245;
    // without setw
    cout<<"The value of d is: "<<d<<endl;
    cout<<"The value of e is: "<<e<<endl;
    cout<<"The value of f is: "<<f<<endl;

    // with setw
    cout<<"The value of d is: "<<setw(4)<<d<<endl;
    cout<<"The value of e is: "<<setw(4)<<e<<endl;
    cout<<"The value of f is: "<<setw(4)<<f<<endl;

    // Operators precedence
    return 0;
}