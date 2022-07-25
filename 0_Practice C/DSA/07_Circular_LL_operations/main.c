#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;

    //pf("Element: %d\n", ptr->data);
    //ptr = ptr->next;

    do
    {
        pf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr != head);
}

struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node * p = head->next;
    while(p->next != head)
    {
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list

    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return ptr;
};

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Terminate the list at the third node
    third->data = 66;
    third->next = NULL;

    linkedListTraversal(head);

    head = insertAtFirst(head, 80);
    linkedListTraversal(head);

    return 0;
}

