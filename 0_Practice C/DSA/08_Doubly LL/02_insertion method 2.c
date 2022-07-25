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
        printf("\nTHE DOUBLY LINKED LIST IS :\n\n");
        
        while(ptr != NULL)
        {
            printf("%d\t", ptr->data);
            n++;
            ptr = ptr->next;
        }
    }
}

// case-1 of insertion : insert at the beginning
void insertAtBeginning(int data)
{
    struct node * newNode;
    if(head == NULL)
    {
        printf("Error, List is Empty!\n");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = head; // Point to next node which is currently head
        newNode->prev = NULL; // Previous node of first node is NULL
        /* Link previous address field of head with newNode */
        head->prev = newNode;
        /* Make the new node as head node */
        head = newNode;
    }
}

// case-2 : Function to insert node at the end of the list
void insertAtEnd(int data)
{
    struct node * newNode;
    if(last == NULL)
    {
        printf("Error, List is empty!\n");
    }
    else
    {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = NULL;  // next pointer of newNode is NULL
        newNode->prev = last;  // prev pointer of newNode is referenced to the last node
        last->next = newNode; // next pointer of the last node is referenced to the newNode
        last = newNode;  // newNode is made as the last node
    }
}

// case-3 : Insert at middle of linked list
void insert_given_pos(int data, int position)
{
    int i;
    struct node * newNode, *temp;
    if(head == NULL)
    {
        printf("Error, List is empty!\n");
    }
    else
    {
        temp = head;
        i=0;
        while(i<position-1 && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }   
        if(temp!=NULL)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = data;
            newNode->next = temp->next; // Connect new node with n + 1th node
            newNode->prev = temp; // Connect new node with n - 1th node
            
            if(temp->next != NULL)
            {
                /* Connect pos+1th node with new node */
                temp->next->prev = newNode;
            }
            /* Connect pos-1th node with new node */
            temp->next = newNode;
        }
        else
        {
            printf("Error, Invalid position\n");
        }
    }
}


int main()
{
    int n, data1, data2, choice=1;
    head = NULL;
    last = NULL;
    printf("\nEnter the total number of nodes you want in Linked list : "); 
    scanf("%d", &n);
    LinkedListCreation(n);
    
    displayList();
    
    printf("\n\nEnter data of first node you want to add at beginning : ");
    scanf("%d", &data1);
    
    insertAtBeginning(data1);
    displayList();
    
    printf("\n\nEnter data of last node you want to add at end : ");
    scanf("%d", &data2);
    insertAtEnd(data2);
    displayList();
    
    int data3, pos;
    printf("\n\nEnter data of node you want to add at middle/any position : ");
    scanf("%d", &data3);
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    insert_given_pos(data3, pos);
    displayList();
    
    return 0;
}





