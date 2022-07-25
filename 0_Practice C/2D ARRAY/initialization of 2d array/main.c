#include <stdio.h>
#include <stdlib.h>
#define MAX_ROW     10
#define MAX_COLUMN  10
//C Program to read a matrix and find sum and product of all elements of two dimensional (matrix) array
int main()
{
    int arr[MAX_ROW][MAX_COLUMN];
    int i,j,r,c;
    printf("Enter the no. of rows:");
    scanf("%d",&r);
    printf("Enter the no. of columns:");
    scanf("%d",&c);

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter the value for [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int sum=0,product=1;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
                sum=sum+arr[i][j];
                product= product*arr[i][j];
        }
    }
    printf("\nSUM of all elements : %d \nProduct of all elements :%d",sum,product);
    return 0;
}
