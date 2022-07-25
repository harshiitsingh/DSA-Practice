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

// case-1 of insertion : insert at the beginning
struct Node * insertAtFirst(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr; // now ptr is new head
}; // here colon is optional ???

// case-2
struct Node * insertAtIndex(struct Node *head, int data, int index) // in between
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head; // initializing head
    int i = 0;

    while(i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// case-3
struct Node * insertAtEnd(struct Node *head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head; // initializing head

    while(p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
};

// case-4
struct Node * insertAfterNode(struct Node *head, struct Node *previousNode, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = previousNode->next;
    previousNode->next = ptr;

    return head;
}

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

    pf("Linked list before insertion is: \n");
    linkedListTraversal(head);

    pf("\nLinked list after insertion at first position is: \n");
    head = insertAtFirst(head, 56);
    linkedListTraversal(head);

    pf("\nLinked list after insertion in between the nodes at any index is: \n");
    head = insertAtIndex(head, 45, 1); // it will not work for index = 0
    linkedListTraversal(head);

    pf("\nLinked list after insertion at end position is: \n");
    head = insertAtEnd(head, 99); // case-3
    linkedListTraversal(head);

    head = insertAfterNode(head, second, 77); // case-4 // second node is given
    pf("\nLinked list after insertion after a (given) node is: \n");
    linkedListTraversal(head);

    return 0;
}
