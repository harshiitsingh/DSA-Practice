#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

void display(int arr[], int n)
{
    for(int i = 0;i<n;i++)
        //pf("%d ",&arr[i]); // gives address
        pf("%d ",arr[i]);

    pf("\n");
}

void indDeletion(int arr[], int size, int index)
{
    // code for deletion of element from array
    int capacity = 100;
    if(index>=capacity-1)
        //pf("Your index value is greater than size of array!"); // --> why due to this wrong output comes??
        return -1;

    for(int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
}

int main()
{
    int arr[100] = {2,7,10,27,66};
    int size = 5,index;//, index=1;
    pf("Array before deletion: ");
    display(arr, size);

    pf("Enter the index value of array which you want to delete: ");
    sf("%d",&index);

    indDeletion(arr, size, index);
    pf("Array after deletion: ");
    size -= 1;
    display(arr, size);

    return 0;
}
