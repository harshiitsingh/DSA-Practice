#include <stdio.h>
#include <stdlib.h>

//WAP to find the volume and surface area of cylinder.

int main()
{
    float h,r,V,SA;
    printf("Enter the value of radius of cylinder: \n");
    scanf("%f",&r);
    printf("Enter the value of height of cylinder: \n");
    scanf("%f",&h);
    V=3.14*r*r*h;
     printf("Volume of cylinder is:%0.2f \n",V);
    SA=2*3.14*r*h+2*3.14*r*r;

    printf("Surface area of cylinder is:%0.2f",SA );

    return 0;
}
