#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top == -1)
        return 1;
    else
        return 0;
}

int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
        return 1;
    else
        return 0;
}

void push(struct stack *ptr, int val)
{
    if(isFull(ptr))
    {
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
        return; // if else will be used here then no need to return.
    }
    // ptr->top++;
    // ptr->arr[ptr->top] = val;
    ptr->arr[++ptr->top] = val;
}

int pop(struct stack *ptr)
{
    if(isEmpty(ptr))  // if(isFull(ptr))
    {
        printf("Stack Underflow! Cannot pop %d from the stack\n", ptr->arr[ptr->top]);
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top - i - 1;
    if(arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10; // can use scanf
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int)); // here stack is created successfully

    printf("Before pushing, full: %d\n", isFull(sp));
    printf("Before pushing, empty: %d\n", isEmpty(sp));

    push(sp, 2);

    push(sp, 21);
    push(sp, 24);
    push(sp, 62);
    push(sp, 12);
    push(sp, 23);
    push(sp, 2);
    push(sp, 27);
    push(sp, 2);
    push(sp, 5); // --> pushed 10 values
    //push(sp, 8); // stack overflow so does not go into stack

    printf("After pushing, full : %d\n", isFull(sp));
    printf("After pushing, empty : %d\n", isEmpty(sp));

    printf("Popped %d from the stack\n", pop(sp));  //LIFO
    printf("Popped %d from the stack\n", pop(sp));  //LIFO
    printf("Popped %d from the stack\n", pop(sp));  //LIFO

    for(int j = 1; j<= sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j , peek(sp, j));
    }

    return 0;
}
