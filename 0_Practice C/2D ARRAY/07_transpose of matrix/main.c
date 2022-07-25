#include <stdio.h>
#include <stdlib.h>

/*
Transpose a matrix { given matrix A, find A^T } without
using any extra matrix ( e.g. do not take B = A^T )
Space complexity = 0(1)
*/

int main()
{
    int arr[10][10], transpose[10][10];
    int r,c,i,j;
    printf("Enter the size of row and column : ");
    scanf("%d%d",&r,&c);

    printf("Enter the elements of matrix : ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter element a[%d][%d] : ", i + 1, j + 1);
            scanf("%d",&arr[i][j]);
            //printf("%d  ",arr[i][j]);
        }
        //printf("\n");
    }

    // Displaying the matrix a[][]
    printf("\nEntered matrix: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", arr[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    //printf("\n\n");
    // Finding the transpose of matrix a
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            transpose[j][i] = arr[i][j];
            //printf("%d  ",transpose[j][i]);
        }
        //printf("\n");
    }

    // Displaying the transpose of matrix a
    printf("\nTranspose of the matrix:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
    return 0;
}
