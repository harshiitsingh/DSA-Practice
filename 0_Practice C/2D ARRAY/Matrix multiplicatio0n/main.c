#include <stdio.h>
#include <stdlib.h>
void Input(int [][], int)l;
int main()
{
    int A[20][20],B[20][20],C[20][20];
    int mA,mB,nA,nB;
    printf("Enter the order of A:\n");
    scanf("%d%d",&mA,&nA);
    Input(A,mA,nA);
    printf("Enter the order of B:\n");
    scanf("%d%d",&mB,&nB);
    Input(B,mB,nB);
    return 0;
}

void Input(int X)
