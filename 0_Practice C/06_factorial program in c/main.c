#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
int main()
{
    int n,sum=1;
    pf("Enter a number to find factorial: ");
    sf("%d",&n);

    while(n>=1)
    {
        sum = sum * n;
        n = n-1;
    }
    pf("\n%d",sum);
    return 0;

    // or
    /*
    int c, n, f = 1;

  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
    f = f * c;

  printf("Factorial of %d = %d\n", n, f);

  return 0;
  */
}
