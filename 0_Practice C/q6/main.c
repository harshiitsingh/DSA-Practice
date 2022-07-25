#include <stdio.h>
#include <stdlib.h>

//WAP to find the area of rhombus.

int main()
{
    float d1,d2;
    float area;

    printf("Enter diagonals of the given rhombus: \n ");
    scanf("%f%f", &d1, &d2);
    area = 0.5 * d1 * d2;
    printf("Area of rhombus is: %.3f \n", area);
    return 0;
}
