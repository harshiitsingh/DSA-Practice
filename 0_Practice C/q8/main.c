#include <stdio.h>
#include <stdlib.h>

//WAP to find the volume and surface area of cuboids.

int main()
{
    float l,b,h,V,LSA,TSA;
    printf("Enter the value of length, breadth and height: \n");
    scanf("%f %f %f",&l,&b,&h);

    V=l*b*h;
    printf("Volume of cuboid is: %0.3f \n",V);

    LSA=2*h*(l+b);
    printf("Lateral surface area of cuboid is:%0.3f \n",LSA);

    TSA=2*(l*b+b*h+h*l);
    printf("Total surface area of cuboid is:%0.3f",TSA);
    return 0;
}
