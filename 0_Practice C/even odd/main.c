#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

int main()
{
    printf("Hello world!\n");
    int n;
    pf("Enter a number: ");
    sf("%d",&n);
    if(n%2 == 0){
        pf("Even");
    }
    else
        pf("odd");
    return 0;
}
