#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1=5,num2=2;
    int *ptr_num1=num1;
    int *ptr_num2=&num2;
    printf("%d,%d",*ptr_num1,*ptr_num2);
    return 0;
}

