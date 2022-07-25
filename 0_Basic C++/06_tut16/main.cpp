#include <iostream>

using namespace std;

int sum(int x, int y) // it will return integer
{
    int c = x+y;
    return c;
}

// This will not swap a and b
void swap(int x, int y) // it will return void but here we want to swap or return two numbers
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    // The numbers are swaped but inside the fxn as fxn terminates both numbers terminates
}


// CALL BY REFERENCE USING POINTERS
void swapPointer(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// CALL BY REFERENCE USING C++ REFERENCE VARIABLES
void swapReferenceVar(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int & swapReferenceVar1(int &x, int &y) // it will return a reference variable
{
    int temp = x;
    x = y;
    y = temp;
    return x;
}

int main()
{
    cout << "Hello world!" << endl;
    int a = 4,b=5;
    cout<<"The value of sum of a and b is "<<sum(a,b)<<endl;
    cout<<"The value of a and b before swap is "<<a<<" and "<<b<<endl;
    swap(a,b); // This will not swap a and b
    cout<<"The value of a and b after swap is "<<a<<" and "<<b<<endl;
    swapPointer(&a, &b); // This will swap a and b using pointer reference
    cout<<"The value of a and b after swap is "<<a<<" and "<<b<<endl;
    swapReferenceVar(a,b); // This will swap a and b using reference variables
    cout<<"The value of a and b after swap is "<<a<<" and "<<b<<endl;

    swapReferenceVar1(a,b) = 766;
    cout<<"The value of a and b after swap is "<<a<<" and "<<b<<endl;
    return 0;
}
