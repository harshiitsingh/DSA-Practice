#include <stdio.h>
#include <stdlib.h>
//for 1-d array
int main()
{
    int arr[20];
    int n,i,j,a;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    printf("Enter the numbers \n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
               a = arr[i];
               arr[i] = arr[j];
               arr[j] = a;
            }
        }
    }
// for descending order
    for (i = 0; i < n; ++i)
        {
            printf("%d\t", arr[i]);
        }
    return 0;
}
