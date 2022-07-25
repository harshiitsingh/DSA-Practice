#include <iostream>

using namespace std;

int glo = 4; // global variable

void func()
{
    int a;
    cout<<"Inside fxn "<<glo<<endl;
}

int main()
{
    int sum = 6;
    cout << "Hello world!" << endl;
    cout<<sum<<" hi";
    cout << "\nHarshit";

    // comments can be used same as in C language
    /*
    same for multi line comments
    */
    int a = 4;
    int b = 5;
    cout<<"\nThis is tutorial 4.\nHere the value of a is "<<a<<". The value of b is "<<b<<". And their sum is "<<a+b<<"."<<endl;
    // \n will work as enter key

    // Now variable scope
    int glo = 9; // local variable
    glo = 10; // updating the value  // precedence: local variable > global
    //cout << glo\n; // gives error
    cout << glo<<endl;
    func();

    char c = 'x';
    bool is_true = true;
    cout<<glo<<c<<is_true; // true = 1 and false = 0
    return 0;
}
