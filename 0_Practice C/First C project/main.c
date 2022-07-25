#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//GAME- GUESS THE NUMBER- 1st random number generate
int main()
{
    int number;
    srand(time(0));
    number=rand()%100 + 1;  //Generates a random between 1 to 100
    printf("The number is %d",number);
    return 0;
}
