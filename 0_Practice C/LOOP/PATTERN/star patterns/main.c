#include <stdio.h>
#include <stdlib.h>
void pattern2(int n,int i,int j);
int main()
{
    //printf("Hello world!\n");
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * "); // printf("*");
        }
        printf("\n");
    }
    printf("\n\n");
    pattern2(n,i,j);
    return 0;
}

void pattern2(int n,int i,int j)
{
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
