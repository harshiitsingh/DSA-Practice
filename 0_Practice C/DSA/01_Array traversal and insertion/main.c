#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

void display(int arr[], int size)
{
    // code for array traversal
    for(int i=0;i<size;i++)
    {
        pf("%d ",arr[i]);
    }
    pf("\n");
}

int indInsertion(int arr[], int size,int capacity, int index, int item)
{
    if(size>=capacity)
        return -1;
    for(int i=size-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=item;
    return 1;
}

int main()
{
    int arr[10] = {2,7,10,27,66};
    int size = 5, capacity = 10, index=3;
    display(arr, size);
    indInsertion(arr, size, capacity, index, 15);
    size += 1;
    display(arr,size);
    return 0;
}

// Try a code in which insertion will take place according to sorted array automatically.
