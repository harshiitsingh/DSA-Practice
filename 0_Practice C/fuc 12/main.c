#include <stdio.h>
#include <stdlib.h>
void func1(int x);
void func2(int x);
int main()
{
    func1(6);
    printf("\n");
    func2(6);
    //printf("Hello world!\n");
    return 0;
}
void func1(int x)
{
    printf("%d ",x);
    if(x>2)
         func1(--x);
}
void func2(int x)
{
    if(x>2)
        func2(--x);
    printf("%d ",x);
}

