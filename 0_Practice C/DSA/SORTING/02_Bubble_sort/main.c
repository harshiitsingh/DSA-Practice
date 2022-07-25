#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    //printf("Hello world!\n");
    int i,j,n, arr[MAX];
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the value of element %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    // BUBBLE SORT
    int xchanges, tmp;
    for(i=0; i<n-1; i++)
    {
        xchanges = 0;
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                xchanges++;
            }
        }
        if(xchanges == 0)
        {
            printf("The list is already sorted\n");
            break;
        }
    }

    printf("Sorted list/array is : \n");
    for(i=0;i<n;i++)
        printf("%d\t", arr[i]);
    printf("\n");
    return 0;
}
