#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
#include<stdio.h>

int main()
{
   // int choice;
    double a,b;
    char ch;
   // scanf("%d",&choice);
    printf("Enter an operator: \n");
    scanf("%c",&ch);
    printf("Enter two operands:");
    scanf("%lf%lf",&a,&b);

    switch(ch)
    {
        case '*':
        printf("%lf",a*b);
        break;

        case '+':
        printf("%lf",a+b);
        break;
    }
}
}
