#include <stdio.h>
#include <stdlib.h>

//WAP to find the perimeter of a circle, rectangle and triangle.


int main()
{
   float radius, length, width, a, b, c;
   float perimeter;

     //Perimeter of circle
    printf(" \n Perimeter of circle \n");
    printf("---------------------------\n");
    printf("\n Enter the radius of the circle : ");
    scanf("%f", &radius);
    perimeter = 2 *3.14* radius;
    printf("Perimeter of circle is: %.3f", perimeter);

     //Perimeter of rectangle
    printf(" \n \n \n Perimeter of rectangle \n");
    printf("---------------------------\n");
    printf("\n Enter width and length of the rectangle : ");
    scanf("%f%f", &width,& length);
    perimeter = 2 * (width + length);
    printf("Perimeter of rectangle is: %.3f", perimeter);

     //Perimeter of triangle
    printf("\n \n \n Perimeter of triangle \n");
    printf("---------------------------\n");
    printf("\n Enter the size of all sides of the triangle : \n ");
    scanf("%f%f%f", &a, &b, &c);
    perimeter = a + b + c;
    printf("Perimeter of triangle is: %.3f", perimeter);

    return 0;
}
