#include<stdio.h>
#include<math.h>

int binary(int arr[]; int item, int l, int r);

int main()
{
    int n, item;
    printf("Enter number of elements=");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter 5 integers= ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the value to find=");
    scanf("%d", &item);
    int l=1, r=n+1;
    binary(arr, item, l, r);
}

int binary(int arr[]; int item, int l, int r)
{
    if(l==r)
    {
        if(item==arr[0])
            return l;
        else
            return 0;
    }
    
    int m = floor((l+r)/2);
    
    if(item>= arr[m]) binary(arr, item, l, m);
    else binary(arr, item, m+1, r);
}