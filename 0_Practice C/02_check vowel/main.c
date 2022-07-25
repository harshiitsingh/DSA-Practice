#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf
int main()
{
    char ch;
    pf("enter a character ");
    sf("%c",&ch);
    //if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    //if(ch == ('a' || 'e' || 'i' || 'o' || 'u')) --> not valid
        //pf("vowel");
    //else
        //pf("consonant");

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
        if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
            printf("%c is a vowel.\n", ch);
        else
            printf("%c is a consonant.\n", ch);
    }
    else
        printf("%c is neither a vowel nor a consonant.\n", ch);
    return 0;
}
