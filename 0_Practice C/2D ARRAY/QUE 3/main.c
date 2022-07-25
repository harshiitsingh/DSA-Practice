#include <stdio.h>
#include <stdlib.h>
//WRITE A C PROGRAM TO SUBTRACTION OF TWO DIAMENSIONAL MATRIX
//I have not mentioned the condition to check the subtraction i.e both matrices rows and columns must be equal....but you can add
int main()
{
    int mat1[10][10],mat2[10][10],sub[10][10];
    int i,j,r,c;
    printf("Enter the number of row and column of matrices:");
    scanf("%d%d",&r,&c);
    printf("\nEnter the elements of first matrix\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter value for element [%d][%d]:",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("\nEnter the elements of second matrix\n");

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter value for element [%d][%d]:",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("\nSubtraction of entered matrices:-\n");

    for (i=0;i<r;i++){
        for (j=0;j<c;j++){
            sub[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}
