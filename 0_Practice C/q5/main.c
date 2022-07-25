#include <stdio.h>
#include <stdlib.h>

//WAP to find the area of trapezium.

int main()
{
   float a,b,h,area;
   printf("Enter the values of parallel sides and heaight: \n");
   scanf("%f %f %f",&a,&b,&h);
   area=(a+b)*h/2;
   printf("Area of trapezium is: %0.2f",area);
    return 0;
}
