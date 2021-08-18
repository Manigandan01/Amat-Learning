/* Stack Implementation Using Array
*/
#include<iostream>
using namespace std;
int top();//returns top element of the stack
void push(int object);//pushes the element into the stack
void pop();//deletes the current element pointed by top
int isEmpty();//returns 1 if stack is empty else return 0
int size();//returns the size of the stack
int stack[1000];// created stack of size 1000
int Top=-1;
int size=0;
int top()
{
    return stack[Top];
}
void push(int object)
{
    stack[++Top]=object;
    size++;
}
void pop()
{
   
   --Top;
   --size;
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
int size()
{
    return size;
}

int main()
{
    cout<<"Enter the number of elements to be pushed into Stack : ";
    int num,itr;
    cin>>num;
    cout<<"Enter the Elements :";
    int object=0;
    for(itr=0;itr<num;itr++)
    {
        cin>>object;
        push(object);
    }
        cout<<"Elements of Stack : ";
        while(!isEmpty())
       {
        cout<<top()<<" ";
        pop();
        }
        return 0;
    
}
