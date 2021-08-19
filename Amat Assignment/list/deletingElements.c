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
void deleteFirst()
{
    node* temp=head;
    if(head==NULL)
    {
        printf("Linked list is Empty");
        return;
    }
    size--;
    if(head->next==NULL)
    {
        free(head);
        free(tail);
        free(temp);
        head=tail=temp=NULL;
        return ;
    }
    head=head->next;
    free(temp);
    temp=NULL;
}
void deleteLast()
{
    node *th1, *th2;
    th1=th2=NULL;
    if(head==NULL)
    {
        printf("Linked List is Empty");
        return;
    }
    size--;
    if(head->next==NULL)
    {
        free(head);
        free(tail);
        head=tail=NULL;
    }
    th1=head->next;
    th2=head;
    while(th1!=tail)
    {
        th1=th1->next;
        th2=th2->next;
    }
    tail=th2;
    tail->next=NULL;
    th1=th2=NULL;
}
void deleteRandom() // Initial Position of the linked List Starts from "1"
{
    node *temp=NULL;
    if(head==NULL)
    {
        printf("Linked list is Empty");
        return ;
    }
    printf("Enter the Position of the Element in  Linked List to be Deleted:");
    int position;
    printf("\nEnter the Data:");
    scanf("%d",&position);
    if(position<=1)
    {
        deleteFirst();
    }
    else if(position>=size)
    {
        deleteLast();
    }
    else
    {
       node *th=head;
       while(position>2)
       {
           th=th->next;
           --position;
       }
       temp=th->next;
       th->next=temp->next;
       free(temp);
       temp=NULL;
    }
    

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
     int enter=1;
     while(enter)
     {
     printf("\nMenu:");
     printf("\nEnter 1 to delete a element at First positon of the List\n");
     printf("Enter 2 to delete a element at the last position of the List\n");
     printf("Enter 3 to delete a element at the random Position of the list\n");

     int option,flag=1;
     
     while(flag)
     {  printf("Enter your Option :");
        scanf("%d",&option);
     switch(option)
     {
         case 1 : deleteFirst(); flag=0;
                  break;
         case 2 : deleteLast(); flag=0;
                  break;
         case 3 : deleteRandom(); flag=0;
                  break;
         default :printf("Invalid Option!Try Again...");
                  flag=1;
     }
     }
     printf("After  Modification the elements of the List :");
     node* t=head;
     while(t!=NULL)
     {
         printf("%d ",t->data);
         t=t->next;
     }
     printf("\n\nIf you Want to continue the Process Enter 5 or else Enter 0 to quit");
     printf("\nEnter your Option:");
     scanf("%d",&enter);
     }
     return 0;
}
