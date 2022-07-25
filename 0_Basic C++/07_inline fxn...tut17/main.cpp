#include <iostream>

using namespace std;

/*
int product(int a, int b){
    return a*b;
}
*/

inline int product(int a, int b){ // inline will put the actual code at call in main fxn i.e. here it will put a*b directly
    // static int c = 0; // This executes only once // dont use inline with static
    // c=c+1; // Next time this fxn is run, the value of c will be retained
    //return a*b+c;
    return a*b; // but its only for small code fxns
}
// do not use inline during recursion, static variables

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney * factor;
}

int strlen(const char *p){

}

int main()
{
    cout << "Hello world!" << endl;
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl; // here
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    cout<<"The product of a and b is "<<product(a,b)<<endl;

    // Default Arguments in C++
    /*
    Default arguments are those values which are used by the function if we don’t input our value.
    It is recommended to write default arguments after the other arguments.
    */
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";

    //Constant Arguments in C++
    /*
    Constant arguments are used when you don’t want your values to be changed or modified by the function.
    It is most valid for reference variables and pointers.
    */

    return 0;
}
