#include <stdio.h>
#include <stdlib.h>

 // wap to calculate the area of the triangle.

int main()
{
    float h,b;

   printf("Enter the value of height:%f \n", h);

    scanf("%0.1f", &h);
    printf("Enter the value of base:%f \n", b);
    scanf("%0.1f", &b);

    printf("Area of triangle is:%f", 0.5*h*b);
    return 0;
}
