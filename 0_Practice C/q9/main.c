#include <stdio.h>
#include <stdlib.h>

//WAP to find the surface area and volume of a cone.

int main()
{
   float r,h; //using only radius and height to calculate, not slant height

   printf("Enter the values of radius and height: \n");

   scanf("%f %f",&r,&h);

   printf("Surface area of cone is:%0.3f \n", 3.14*r*sqrt(r*r+h*h));

   printf("Volume of cone is:%0.3f", 3.14*r*r*h/3);
    return 0;
}
