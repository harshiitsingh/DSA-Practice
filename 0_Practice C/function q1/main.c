#include <stdio.h>
#include <stdlib.h>
//Write a C programming to find out maximum and minimum of some values using function which will return an array.


int main()
{
    int n,s[100];
    int i;
    printf("Enter how many numbers you want to comapre: \n");
    scanf("%d",&n);
    printf("Input the values of %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",s[i]);
    }
    printf("The maximum value in %d numbers is %d",n,max())
    return 0;
}
