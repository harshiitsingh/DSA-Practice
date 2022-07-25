#include <stdio.h>
#include <stdlib.h>

//WAP to find the volume and surface area of a sphere.

int main()
{
    float r;
    printf("Write value of radius of sphere: \n");
    scanf("%f",&r);

    printf("Volume of sphere is: %0.3f \n",4*3.14*r*r*r/3);
    printf("Surface area of sphere is:%0.3f",4*3.14*r*r);
    return 0;
}
