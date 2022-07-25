#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    int i,j,n, arr[50];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter the value of arr[%d]: ",i+1);
        scanf("%d", &arr[i]);
    }

    // SELECTION SORT
    int min,tmp;
    for(i=0;i<n-1;i++)
    {
        // Find the index of smallest element
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
                min = j;
        }
        if(i != min)
        {
            tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }

    printf("Sorted list/array is : \n");
    for(i=0;i<n;i++)
        printf("%d\t", arr[i]);
    printf("\n");
    return 0;
}
