#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}node;

node* head=NULL;
node* tail=NULL;
int size;
node* createNode()
{
    node* temp=(node*)malloc(sizeof(node));
    temp->next=NULL;
    return temp;
}
void addFirst()
{
    node* temp=createNode();
    printf("Enter the Data :");
    scanf("%d",&temp->data);
    size++;
    if(head==NULL)
    {
        head=temp;
        tail=head;
        return ;
    }
    temp->next=head;
    head=temp;
}
void addLast()
{
    node* temp=createNode();
    printf("Enter the Data:");
    scanf("%d",&temp->data);
    size++;
    if(head==NULL)
    {
        head=temp;
        tail=head;
        return;
    }
    tail->next=temp;
    tail=temp;
}
void addRandom()
{
    node* th=head;
    int position;
    printf("Enter the Position Where the Data should be added :");
    scanf("%d",&position);
    if(position<=1)
    {
        addFirst();
        return;
    }
    else if(position>size)
    {
        addLast();
        return ;
    }
    else
    {
        while(position>2)
        {
            th=th->next;
            --position;
        }
    }
    node *temp=createNode();
    printf("Enter the Data:");
    scanf("%d",&temp->data);
    temp->next=th->next;
    th->next=temp;
}
int main()
{
    size=3;
    head=createNode();
    head->data=1;
    node* temp=head;
    head->next=createNode();
    temp->next->data=2;
    temp->next->next=createNode();
    temp->next->next->data=3;
    tail=temp->next->next;
     printf("Initial List : ");
     while(temp!=NULL)
     {
         printf("%d ",temp->data);
         temp=temp->next;
     }

     printf("\nMenu:");
     printf("\nEnter 1 to add a element at First positon of the List\n");
     printf("Enter 2 to add a element at the last position of the List\n");
     printf("Enter 3 to add a element at the random Position of the list\n");
     printf("Enter your Option :");
     int option;
     scanf("%d",&option);
     switch(option)
     {
         case 1 : addFirst();
                  break;
         case 2 : addLast();
                  break;
         case 3 : addRandom();
                  break;
         default :printf("Invalid Option!Try Again...");
     }
     printf("After  Modification the elements of the List :");
     while(head!=NULL)
     {
         printf("%d ",head->data);
         head=head->next;
     }
     return 0;
    
}