#include <stdio.h>
#include <string.h>

// Check whether a string is palindrome or not

int main()
{
    char str[100];
    int l, flag = 0;

    printf("Enter a string:");
    scanf("%s", str);

    l = strlen(str);

    for(int i=0;i < l ;i++)
    {
        if(str[i] != str[l-i-1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("\n%s is not a palindrome", str);
    else
        printf("\n%s is a palindrome", str);

    return 0;
}
