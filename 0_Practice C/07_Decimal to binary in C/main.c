#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
int main()
{
    float n;
    int x,r, f = 1; // r is remainder
    long binary = 0;
    pf("Enter a number: ");
    sf("%f",&n);

    x = (int)n;
    pf("The integer part is %d\n",x);
    double decimalPart = n - x;
    while(x != 0)
    {
        r = x%2;
        binary = binary + r * f;
        f = f * 10;
        x = x/2;
    }

    int y;
    double decimalPartinBinary = 0, f1 = 0.1;
    if(decimalPart == 0)
        return 0;
    else
        pf("The decimal part is %f",decimalPart);
        while(decimalPart == 1) // --> problem
        {
            decimalPart = decimalPart * 2;
            y = (int)decimalPart;
            decimalPartinBinary = decimalPartinBinary + y * f1;
            f1 = f1 * 0.1;
        }
    pf("\n%d.",binary);
    pf("%d",decimalPartinBinary); //--> problem
    return 0;
}

/*
// How to extract the decimal part from a floating point number in C?
1st method:
You use the modf function:

double integral;
double fractional = modf(some_double, &integral);

2nd method:
double num = 23.345;
  int intpart = (int)num;
  double decpart = num - intpart;
  printf("Num = %f, intpart = %d, decpart = %f\n", num, intpart, decpart);

*/

/*
// 2ND METHOD
//Decimal to binary conversion in C
#include <stdio.h>
#include <stdlib.h>
char *decimal_to_binary(int);

int main()
{
  int n;
  char *p;

  printf("Enter an integer in decimal number system\n");
  scanf("%d", &n);

  p = decimal_to_binary(n);
  printf("Binary string of %d is: %s\n", n, p);

  free(p);

  return 0;
}

char *decimal_to_binary(int n)
{
  int c, d, t;
  char *p;

  t = 0;
  p = (char*)malloc(32+1);

  if (p == NULL)
    exit(EXIT_FAILURE);

  for (c = 31 ; c >= 0 ; c--)
  {
    d = n >> c;

    if (d & 1)
      *(p+t) = 1 + '0';
    else
      *(p+t) = 0 + '0';

    t++;
  }
  *(p+t) = '\0';

  return  p;
}
*/
