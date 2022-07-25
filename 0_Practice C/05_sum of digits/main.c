#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
int main()
{
    int n,y, a, sum=0;
    char str[20];    //create an empty string to store number
    pf("Enter a number: ");
    sf("%d",&n);

    sprintf(str, "%d", n);   //make the number into string using sprintf function
    y = strlen(str);
    pf("\nYou have entered: %s and its length is %d", str,y);

    for(int i=0;i<=y;i++)
    {
        a = n%10;
        sum += a;
        n = n/10;
    }
    pf("\nThe sum of digits of %s is %d",str,sum);
    return 0;

    // or
    /*
    int n, t, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = n;

   while (t != 0)
   {
      remainder = t % 10;
      sum       = sum + remainder;
      t         = t / 10;
   }

   printf("Sum of digits of %d = %d\n", n, sum);
   return 0;
   */
}
