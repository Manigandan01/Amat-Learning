/*    
    This program Demonstrates 
    linked list - creating & adding new nodes and printing the list by traversing

*/
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int data;
    struct node* next;
}node;// new name for struct node

node* createNode();//will create and return a new node
node* createNode()
{
    node* newNode;
    newNode=(node*)malloc(sizeof(node));
    printf("Enter the Element : ");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    return newNode;
}

int main()
{
    int size,itr;
    printf("Enter the Size of the Linked List :");
    scanf("%d",&size);
    node *head=NULL,*temp=NULL; // head will point to the head node and temp will be used to traversing the linked list
    for(itr=0;itr<size;itr++)
    { 
         if(itr==0)
         {
                temp=head=createNode();

         }
         else
         {
            temp->next=createNode();
            temp=temp->next;
         }
    }
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->next;
    }
    
    free(head); free(temp);
    head=NULL;
    temp=NULL;
    return 0;
}