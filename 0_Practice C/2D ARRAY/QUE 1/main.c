#include <stdio.h>
#include <stdlib.h>
//taking values from user to form a matrix and print the elements
int main()
{
    int matrix[3][2];
    //printf("Hello world!\n");

    //taking values from user
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("Enter value for matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    //displaying the array elements
    printf("2D array elements:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",matrix[i][j]);
            if(j==1){
                printf("\n");
            }
        }
    }
    return 0;
}
