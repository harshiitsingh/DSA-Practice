#include <stdio.h>
#include <stdlib.h>
void pattern2(int i, int j);
void pattern3(int i, int j);
void pattern4(int i, int j);
int main()
{
    //printf("Hello world!\n");
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    printf("%d %d\n\n",i,j);
    pattern2(i,j);
    pattern3(i,j);
    pattern4(i,j);
    return 0;
}

void pattern2(int i,int j)
{
    for(i=1;i<=5;i++)    // in place of 5 you can also take n by scanf
    {
        for(j=1;j<=5;j++)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
    printf("%d %d\n\n",i,j);
}

void pattern3(int i, int j)
{
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf(" %d ",i);
        }
        printf("\n");
    }
    printf("%d %d\n\n",i,j);
}

void pattern4(int i, int j)
{
    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int cnt = 1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf(" %d ",cnt);
            cnt++;
        }
        printf("\n");
    }
    printf("%d %d\n\n",i,j);
}
