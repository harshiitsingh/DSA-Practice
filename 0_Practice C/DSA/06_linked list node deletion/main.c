#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define sf scanf

struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        pf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case - 1 : Deleting the first node from the linked list
struct Node * deleteFirstNode(struct Node *head)
{
    // struct Node * ptr = (struct Node *)malloc(sizeof(struct Node)); // --> wrong as this will create a space for a new node or will create a new node
    struct Node * ptr = head; // this will create a node pointer which is equal to head pointer
    head = head->next;
    free(ptr);
    return head;
};

// Case - 2 : Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node *head,  int index)
{
    struct Node * p = head; // this will create a node pointer which is equal to head pointer
    struct Node * q = head->next;

    for(int i = 0; i<index-1; i++) // it cant delete index = 0, we have to modify it
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

// Case - 3 : Deleting the last element from the linked list
struct Node * deleteAtLast(struct Node *head)
{
    struct Node * p = head; // this will create a node pointer which is equal to head pointer
    struct Node * q = head->next;

    while(q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

// Case - 4 : Deleting the element with a given value from the linked list
struct Node * deleteWithValue(struct Node *head, int value)
{
    struct Node * p = head; // this will create a node pointer which is equal to head pointer
    struct Node * q = head->next;

    while(q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if(q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    third->data = 66;
    third->next = fourth;

    fourth->data = 75;
    fourth->next = fifth;

    fifth->data = 80;
    fifth->next = NULL;

    pf("Linked list before deletion:\n");
    linkedListTraversal(head);

    head = deleteFirstNode(head); // for deleting first element of the linked list
    //head = deleteFirstNode(head);
    pf("\nLinked list after deletion of first (head) node:\n");
    linkedListTraversal(head);

    head = deleteAtIndex(head, 2); // delete a node in between
    pf("\nLinked list after deletion of a node at a particular index:\n");
    linkedListTraversal(head);

    head = deleteAtLast(head); // for deleting last element of the linked list
    pf("\nLinked list after deletion of last node:\n");
    linkedListTraversal(head);

    head = deleteWithValue(head, 66);
    pf("\nLinked list after deletion of a node with a given value:\n");
    linkedListTraversal(head);
    return 0;
}

