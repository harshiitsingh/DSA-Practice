#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    char maths, science;
    printf("Are u passed in maths\n");
    scanf("%c %c", &maths, &science);
    //fflush(stdin);
    printf("Passing status: %c\n", maths);
    printf("Are u passed in science\n");
    //scanf("%c", &science);
    printf("Science: %c", science);
    return 0;
}
