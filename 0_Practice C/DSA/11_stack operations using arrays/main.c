#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack_arr[MAX];
int top = -1;

int isEmpty();
int isFull();
void push(int data[]);
int pop();
int peek();
void diplay();

int main(void)
{
    printf("\n\t\t**********PUSH OPERATION**********\n\n");
    int data[20], n;
    printf("Enter the number of elements you want to push in stack : ");
    scanf("%d", &n);
    printf("Enter the values of data you want to push in stack : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&data[i]);
        push(data[i]);
    }
    display();

    printf("\n\t\t**********POP OPERATION**********\n\n");
    int item = pop();
    printf("Popped item is : %d\n", item);
    display();

    printf("\n\t\t**********PEEK OPERATION**********\n\n");
    printf("Item at the top is : %d\n",peek());
    display();

    printf("\n\t\t**********UPDATE OPERATION**********\n\n");
    int row, new_element;
    printf("Enter row number you want to update : ");
    scanf("%d",&row);
    printf("Enter the new element: ");
    scanf("%d", &new_element);
    update(row, new_element );
    display();
    return 0;
}

int isEmpty()
{
    if(top == -1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top == MAX - 1)
        return 1;
    else
        return 0;
}

void push(int data[])
{
    if(isFull())
    {
        printf("Stack Overflow!\n");
        return;
    }
    stack_arr[++top] = data;
}

int pop()
{
    int item;
    if(isEmpty())
    {
        printf("Stack Underflow!\n");
        exit(1);
    }
    item = stack_arr[top];
    top--;
    return item;
}

int peek()
{
    if(isEmpty())
    {
        printf("Stack Underflow!\n");
        exit(1);
    }
    return stack_arr[top];
}

void update(int row, int new_element){
    int i;
    int j = -1;
    int temp[MAX];
    printf("Top : %d\n", top);
    for(i = top; i>row; i--){
        temp[++j] = stack_arr[top--];
   /*
        display();
        printf("\n\tTop: %d", s.top);
        printf("\n\t j : %d", j);
   */
    }
    stack_arr[top] = new_element;
    /*
        display();
        printf("\n\tTop: %d", s.top);
        printf("\n\t j : %d", j);
    */
    for(i = j; i>-1; i--){
        stack_arr[++top] = temp[j--];
    /*
        display();
        printf("\n\tTop: %d", s.top);
        printf("\n\t j : %d", j);
    */
    }
}

void display()
{
    if(isEmpty())
    {
        printf("Stack is Empty!\n");
        return;
    }
    printf("Stack Elements are : \n");
    for(int i = top; i>=0 ; i--)
    {
        printf(" %d\n", stack_arr[i]);
    }
    printf("\n");
}
