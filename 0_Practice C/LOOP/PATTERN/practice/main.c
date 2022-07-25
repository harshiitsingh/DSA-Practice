#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a=2,b=3;//c = a-- || --b;
    int d;
    int e;
    //printf("%d",c);
    d = a++;
    e = ++b;
    printf("%d %d %d %d",d,e,a,b);
    for(int i=64;i;i>>=1)
    {
        printf("hello\n");
    }
    return 0;
}
