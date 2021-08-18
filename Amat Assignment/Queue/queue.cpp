/*
   Queue  implementation using Array
*/
#include<iostream>
using namespace std;
#define Max 6    
int getSize();//returns Size of the Queue
int isEmpty();//returns 1 if the queue is empty , 0 if the queue is not empty
void enqueue(int obj);//pushes the element into the queue
int deque();//pops and returns the element
int Queue[Max];
int front=0, rear=0 , size=0;
int getSize()
{
    return size;
}
int isEmpty()
{
    if(size==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void enqueue(int object)
{
    rear=(rear+1)%Max;
    if(front==rear)
    {
        cout<<"Queue is Full!";
        if(rear==0)
        {
            rear=Max-1;
        }
        else
        {
            rear=rear-1;
        }
         return ;
    }
    Queue[rear]=object;
    ++size;
}
int deque()
{
    if(front==rear)
    {
        cout<<"Queue is Empty";
        return -1;
    }
    front=(front+1)%Max;
    --size;
    return Queue[front];
}
int main()
{
    int object;
    int itr;
    cout<<"Enter 5 Elements of Queue :";
    for(itr;itr<5;itr++)
    {
        cin>>object;
        enqueue(object);
    }
    cout<<"\nSize of Queue is :"<<getSize();
    cout<<"\nElements of Queue :";
    while(!isEmpty())
    {
        cout<<deque()<<" ";
    }
    cout<<"\nSize of Queue is :"<<getSize();
    return 0;
}

