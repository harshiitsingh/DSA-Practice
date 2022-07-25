#include <stdio.h>
#include <stdlib.h>

//Write a C-program using Function-swap two numbers using call by Reference.
void swap(int*, int*);
int main()
{
   int x, y;
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
   printf("Before Swapping\n x=%d\n y=%d\n", x, y);

   swap(&x, &y);

   printf("After Swapping\n x=%d\n y=%d\n", x, y);
   return 0;
}

void swap(int *a, int *b)
{
   int temp;
   temp = *b;
   *b = *a;
   *a = temp;
}
