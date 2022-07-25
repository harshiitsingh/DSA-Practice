#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr; // its an integer pointer which will be dynamically allocated
};

// condition for stack empty and full
int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
        return 1; // or -1??
    else  // no need of else
        return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
        return 1;
    else  // no need of else
        return 0;
}

int main()
{
    //struct stack s;
    //s.size = 80;
    //s.top = -1;
    //s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack *s;// now s is a pointer of stack structure // its a structure pointer which will store the address of structure
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    // Pushing an element manually
    //s->arr[0] = 4;
    //s->top++;

    // Check if stack is empty
    if(isEmpty(s))
        printf("The stack is empty");
    else
        printf("The stack is not empty");

    return 0;
}
