#include <stdio.h>
#include <stdlib.h>

 //WAP to compute the surface area and volume of a cube.


int main()
{
    float l, SA,Volume;

    printf("\n Please Enter Length of side of a Cube \n");
    scanf("%f",&l);

    SA = 6 *(l * l);
    Volume = l * l * l;

    printf("\n Surface Area of Cube= %.2f \n", SA);

    printf("\n Volume of cube= %.2f \n", Volume);

    return 0;
}
