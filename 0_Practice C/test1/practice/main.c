#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i=2; i<=n; i++)
    {
        sum = sum + (i-1)*i;
    }
    printf("%d",sum);
    return 0;
}
