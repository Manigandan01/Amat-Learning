/* In this Code snippet Stack implementation is done
   Some functions used are:
    top()-used to get the top  most element in the stack
    pop()-used to delete the top most element 
    push()-pushes a new element or object into the stack
    size()-returns the size of the stack
    swap()-swaps two stacks
    empty()-return true if the stack is empty, Flase if the stack is not empty
*/
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> box;
    int itr=0;
    while(itr<5)
    {
        box.push(itr);
        itr++;
    }
    cout<<"Initial Size of the stack :"<<box.size()<<endl;
    cout<<"Initial values inside Stack :";
    while(!box.empty())
    {
        cout<<" "<<box.top();
        box.pop();
    }
    cout<<endl<<"After poping the Elements the Size of the Stack1 is :"<<box.size();

    stack<int> box1;
    box1.push(34);   box1.push(45);
    box.push(56);  box.push(89);   box.push(-87);

    cout<<"\nInitial Size of the Stacks stack1:"<<box.size()<<" "<<"stack2 :"<<box1.size();
    cout<<"\nBefore Swapping the values of the stacks\n"<<"stack1: ";
    while(!box.empty())
    {
        cout<<box.top()<<" ";
         box.pop();
    }
    cout<<"\nstack2 :";
    while(!box1.empty())
    {
        cout<<box1.top()<<" ";
        box1.pop();
    }
    box1.push(34);   box1.push(45);
    box.push(56);  box.push(89);   box.push(-87);
    box1.swap(box);

    cout<<"\n\nAfter Swapping the Stacks\n\nThe Values of Stack1  and Stack2 are \n";
    cout<<"stack1 :";
    while(!box.empty())
    {
        cout<<box.top()<<" ";
         box.pop();
    }
    cout<<"\nstack2 :";
    while(!box1.empty())
    {
        cout<<box1.top()<<" ";
        box1.pop();
    }
    return 0;
}