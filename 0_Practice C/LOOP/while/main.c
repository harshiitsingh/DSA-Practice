#include <stdio.h>
#include <stdlib.h>
//wap to enter numbers till user wants. At the end it should display the count of positive,neagtive and zeroes entered.
int main()
{
    int i,n1,n2;
    printf("enter number starting and ending of numbers: \n");
    scanf("%d%d",&n1,&n2);
    i=n1;
    while(i<=n2)
    {
        printf("%d\n",i);
        i++;

    }
    printf("Hello world!\n");
    return 0;
}
