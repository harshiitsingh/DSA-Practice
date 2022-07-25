#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

int linearSearch(int arr[], int size, int element)
{
    // code for linear search
    // for linear search any array (sorted or unsorted array) can be done.
    for(int i = 0; i< size; i++)
    {
        if(arr[i] == element)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int element)
{
    // code for binary search
    // condition for binary search must be for sorted array
    int low, mid, high;
    low = 0;
    high = size-1;
    ///// Start Searching
    // Keep searching until low <= high
    while(low<=high)
    {
         mid = (low + high)/2; // it will not return decimal since it is a integer not float
        if(arr[mid] == element)
        return mid;

    if(arr[mid]<element)
        low = mid + 1; // why mid + 1?? to take exclusively
    else
        high = mid - 1;
    }
    //// Searching ends
    return -1;
}

int main()
{
    // Unsorted array for linear search
    int arr1[] = {1,3,10,5,3,4,34,9,18,40};
    int size = sizeof(arr1)/sizeof(int); // to find the size of array
    int element = 18;
    //int element = 14;
    int searchIndex = linearSearch(arr1, size, element);
    pf("The element %d was found at index %d \n",element, searchIndex);

    // Sorted array for binary search
    int arr2[] = {2,5,7,8,10,20,25,33,66,100,224};
    int size1 = sizeof(arr2)/sizeof(int);
    int element1 = 33;
    int searchIndex1 = binarySearch(arr2, size1, element1);
    pf("The element %d was found at index %d \n",element1, searchIndex1);
    return 0;
}
