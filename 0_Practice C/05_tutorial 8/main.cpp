#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    int a = 34;
    cout<<a<<endl;
    a =45;
    cout<<a<<endl;

    // Constants in C++
    const int b = 3;
    cout<<"The value of b was: "<<b<<endl;
    //b = 45; // you will get an error bcoz b is a constant
    cout<<"The value of b is: "<<b<<endl;

    // MANIPULATORS in C++
    // endl is also a manipulator
    int c = 3, d = 78, e = 1233;
    cout<<"The value of c is "<<c<<endl;
    cout<<"The value of c with setw is "<<setw(4)<<c<<endl; // setw is a manipulator which is coming from the iomanip --> it will take the space of 4 bytes or 4 numbers
    cout<<"The value of d is "<<setw(4)<<d<<endl;
    cout<<"The value of e is "<<setw(4)<<e<<endl;

    // Operator precedence
    // Precedence and associativity
    // same as c with some new changes
    // check .... google c++operator reference and then check cppreference.com
    return 0;
}
