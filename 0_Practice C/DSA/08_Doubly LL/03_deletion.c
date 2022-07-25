#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;

void LinkedListCreation(int n)
{
    int i, data;
    struct node *newNode;
    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));
        printf("\nEnter data of node 1 : ");
        scanf("%d", &data);
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        last = head;
        for(i=2; i<=n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            printf("\nEnter data of node %d : ", i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->prev = last;
            newNode->next = NULL;
            last->next = newNode;
            last = newNode;
        }
    }
}

void displayList()
{
    struct node * ptr;
    int n = 1;
    if(head == NULL)
    {
        printf("\nList is empty.\n");
    }
    else
    {
        ptr = head;
        //printf("\nTHE DOUBLY LINKED LIST IS :\n\n");
        
        while(ptr != NULL)
        {
            printf("%d\t", ptr->data);
            n++;
            ptr = ptr->next;
        }
    }
}

// case-1 : Function to delete the node at the beginning of the list
void delete_beginning()
{
    struct node * temp;
    temp = head;
    head = head -> next;  // Shift head node
    head -> prev == NULL;  // The prev pointer of the head node is NULL
    free(temp);          // Delete the first node
}

// case-2 : Function to delete the node at the end of the list
void delete_end()
{
    struct node * temp;
    if(last == NULL)
    {
        printf("Unable to delete. List is empty.\n");
    }
    else
    {
        temp = last;
        last = last->prev; // Move last pointer to 2nd last node
        
        if (last != NULL)
            last->next = NULL; // The next pointer of the last node is NULL
        free(temp); // Delete the last node
    }
}

// Case-3 : Function to delete a node at the given position in the list
void delete_given_position(int position)
{
    struct node *ptr;
    int i;
    ptr = head;
    
    for(i=0; i<position-1; i++)
    {
        ptr = ptr->next;
    }
    
    if(ptr != NULL)
    {
        ptr->prev->next = ptr->next;   // Assign the next pointer of node to be deleted to its previous node's prev pointer
        ptr->next->prev = ptr->prev;   // Assign the prev pointer of the node to be deleted to its next node's next pointer
        free(ptr); // Delete the temp node
    }
    else
    {
        printf("Invalid position!\n");
    }
}

int main()
{
    int n;
    head = NULL;
    last = NULL;
    
    printf("Enter the total number of nodes in list : ");
    scanf("%d", &n);
    LinkedListCreation(n);
    
    printf("\n\nThe doubly Linked list is :\n\n");
    displayList();
    delete_beginning();
    printf("\n\nThe doubly Linked list after deletion of first node :\n\n");
    displayList();
    
    delete_end();
    printf("\n\nThe doubly Linked list after deletion of last node :\n\n");
    displayList();
    
    int pos;
    printf("\n\nEnter the position you want to delete : ");
    scanf("%d",&pos);
    delete_given_position(pos);
    printf("\n\nThe doubly Linked list after deletion of node at given position by user (except position = 0 and 1) :\n\n");
    displayList();
    return 0;
}