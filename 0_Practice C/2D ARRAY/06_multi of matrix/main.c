#include <stdio.h>
#include <stdlib.h>
//Multiply two matrix C1 = A*B ; C2 = B*A ; C1 != C2
int main()
{
    int mat1[10][10], mat2[10][10], multiply[10][10];
    int i,j,k,n,m,p,q;
    int sum = 0;
    printf("Hello world!\n");
    printf("Enter the number of rows and columns of first matrix : ");
    scanf("%d%d", &m, &n);

    //taking value of 1st matrix
    printf("Enter the elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat1[i][j]);
            printf("%d  ",mat1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the number of rows and columns of second matrix : ");
    scanf("%d%d", &p, &q);
    //taking value of 2nd matrix
    printf("Enter the elements of second matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&mat2[i][j]);
            printf("%d  ",mat2[i][j]);
        }
        printf("\n");
    }



    if ( n != p )
        printf("Matrices with entered orders can't be multiplied with each other.\n");
    else
    {
        for(i=0;i<m;i++)
        {
           for(j=0;j<q;j++)
           {
               for(k=0;k<p;k++)
               {
                   sum = sum + mat1[i][k] * mat2[k][j];
               }
               multiply[i][j] = sum;
               sum = 0;
           }
        }

        printf("Product of entered matrices:-\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t", multiply[i][j]);
            }
            printf("\n");

         }
    }

    return 0;
}
