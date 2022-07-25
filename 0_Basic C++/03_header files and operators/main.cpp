// There are two types of header files:
// 1. System header files: It comes with the compiler
#include <iostream>
// 2. User defined header files: It is written by the programmer
// #include "this.h" // --> This will produce an error if this.h is not present in the current directory

// c++ reference for header files  --> google it
using namespace std;

int main()
{
    // THESE ALL ARE SEQUENCE CONTROL STATEMENTS/STRUCTURES/PROGRAMS
    //cout << "Hello world!" << endl;
    int a = 4, b = 5;
    cout<<"Opertors in C++ : "<<endl;  // endl is another way to make a new line

    // ARITHMETIC OPERATORS
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;  // --> Post increment //Increment and decrement operator
    cout<<"The value of a-- is "<<a--<<endl;  // --> Post decrement
    cout<<"The value of ++a is "<<++a<<endl;  // --> Pre increment
    cout<<"The value of --a is "<<--a<<endl;  // --> Pre decrement

    // ASSIGNMENT OPERATORS --> used to assign values to variables
    // int a = 1, b = 9;
    // char = 'd';

    // COMPARISON OPERATORS --> give values in TRUE (1) or FALSE (0)
    cout<<"The value of a == b is "<<(a==b)<<endl; // use parentheses here

    // LOGICAL OPERATORS [ &&, ||, ! ]
    cout<<"The value of LOGICAL not operator is: "<<(!(a==b))<<endl;


    // BITWISE OPERATORS

    return 0;
}
