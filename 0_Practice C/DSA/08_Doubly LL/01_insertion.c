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

int calcSize(struct Node* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }

    printf("Size is %d \n",size);
    return size;
}

// case-3 : Insert at middle of linked list
void insertPosition(int pos, int data, struct Node** head)
{
    int size = calcSize(*head);

    //If pos is 1 then should use insertStart method
    //If pos is less than or equal to 0 then can't enter at all
    //If pos is greater than size then bufferbound issue
    if(pos<1 || size <= pos)
    {
        printf("Can't insert, %d is not a valid position\n",pos);

    }
    else
    {
        struct Node* temp = *head;
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        while(--pos)
        {
            temp=temp->next;
        }
        //temp2 = 10 as 12->next is 10
        struct Node* temp2 = temp->next;

        //(25)->next = 10 as 12->next is 10
        newNode->next= temp->next;
        //(25)->prev = 12
        newNode->prev = temp;

        // (12)->next = 25
        temp->next = newNode;
        // (10)->prev = 25
        temp2->prev = newNode;

        //new node added in b/w 12 and 10
    }
}


int main()
{
    int n, data, choice=1;
    head = NULL;
    last = NULL;
    printf("\nEnter the total number of nodes you want in Linked list : ");
    scanf("%d", &n);
    LinkedListCreation(n);

    displayList();

    printf("\n\nEnter data of first node : ");
    scanf("%d", &data);

    insertAtBeginning(data);
    displayList();

    insertAtEnd(data);
    displayList();

    calcSize(head);
    insertPosition(3,25,&head);


    display(head);

    return 0;
}





