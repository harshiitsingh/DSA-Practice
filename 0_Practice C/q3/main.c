#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c, s, area;

  printf("Enter sides of a triangle \n");
  scanf("%f %f %f", &a, &b, &c);

  s = (a+b+c)/2; // Semiperimeter

  area = sqrt(s*(s-a)*(s-b)*(s-c)); //heron's formula

  printf("Area of the triangle = %0.2f \n", area);

    return 0;
}
