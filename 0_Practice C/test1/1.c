#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int a,b,max;
    printf("Enter both the values\n");
    scanf("%d%d",&a,&b);
    max = a>b?a:b;
    printf("%d",max);
    return 0;
}
