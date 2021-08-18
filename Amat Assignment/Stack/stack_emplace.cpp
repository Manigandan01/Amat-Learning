/* 
  In this code snippet we have used Emplace
  emplace() - will create an object and pushes into the stack
              we can pass N number of objects  

*/
#include<iostream>
#include<stack>
using namespace std;
class A
{
    int x, y;
    public:
       A(int value1=0, int value2=0)
       {
            x=value1;
            y=value2;
           cout<<"Constructor Called! "<<"X :"<<x<<" Y :"<<y<<endl;
       }
};
int main()
{
        stack<A> s; //created an stack of Object A
         A obj1(10); 
         //push will always take one argument
        s.push(obj1);// now constructor is called and obj1 is pushed but we can push 2objs into stack so we can use emplace()

        //Using emplace
        s.emplace(345,897);
        // here emplace creates 2objects and pushes into stack
        return 0;
}