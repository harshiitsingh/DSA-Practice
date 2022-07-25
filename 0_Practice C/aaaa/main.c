#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,n,p,q,m[40];
    printf("Enter the number:");
    scanf("%d",&n);
    for(p=0;p<n;p++){
        scanf("%d",&m[p]);
    }
    for(q=0;q<n;q++){
        if(m[q]>=50)
            count++;
    }
    printf("Passed:%d",count);
    //printf("Hello world!\n");
    return 0;
}
