#include <iostream>

using namespace std;
int c = 45;
int main()
{
    // ********Built in Data types*********
    int a,b,c;
    //cout<<"Enter the value of a: "<<endl;
    //cin>>a;
    //cout<<"Enter the value of b: "<<endl;
    //cin>>b;
    //c = a+b;
    //cout<<"The sum is: "<<c<<endl; // by default scope is local inside a block
    //cout<<"The global c is "<<::c<<endl;  // :: is scope resolution operator to access global variable


    // ********Float, double and long double Literals*********
    float d = 34.4;
    // or
    //float d = 34.4f;
    long double e = 34.4;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl; // chaining

    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; // 34.4 will be by default double
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;


    // ********Reference Variables*********
    // Rohan Das ----> Monty ----> Rohu ----> Dangerous Coder
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // ********Typecasting*********
    int y1 = 45;
    int z = 45.56;
    cout<<"The value of y1 is "<<(float)y1<<endl;
    cout<<"The value of y1 is "<<float(y1)<<endl;  // above both are same in C++
    cout<<"The value of z is "<<int(z)<<endl;

    int y2 = int(z);
    cout<<"The expression is "<<y1+z<<endl;
    cout<<"The expression is "<<y1+(int)z<<endl;
    cout<<"The expression is "<<y1+int(z)<<endl;

    return 0;
}
