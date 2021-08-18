#include <iostream>
#include <array>
using namespace std;

int main()
{    //array<object_type, array_size> array_name;
    array<int,10> arr={1,3,2,5,4,7,6,9,8,10};

    cout<<"The first element is :"<<arr.at(0);// using 'at function' to access elements
    
    //front()
    cout<<"\nFront element :"<<arr.front();
    
    //back()
    cout<<"\nBack element :"<<arr.back();

    //fill()
    array<int,5> arr1;
    int iterator=0;
    cout<<"\n\nBefore Filling (some garbage values) :";
    for(iterator=0;iterator<arr1.size();iterator++)
    {
         cout<<arr1[iterator]<<" ";
    }
    arr1.fill(1);
    cout<<"\n\nAfter Filling :";
    for(iterator=0;iterator<arr1.size();iterator++)
    {
        cout<<arr1.at(iterator)<<" ";
    }
    

    //swapping
    array<int,5> container1={1,2,3,4,5};
    array<int,5> container2={5,4,3,2,1};
    cout<<"\n\nBefore Swapping : \nC1    c2\n\n";
    for(iterator=0;iterator<container1.size();iterator++)
    {
        cout<<container1.at(iterator)<<"     "<<container2.at(iterator)<<endl;
    }
    container1.swap(container2);
    cout<<"\n\nAfter Swapping : \nC1   C2\n";
    for(iterator=0;iterator<container1.size();iterator++)
    {
        cout<<container1.at(iterator)<<"     "<<container2.at(iterator)<<endl;
    }

    int *itr=container1.begin(); // begin() will return a starting address of an array
    cout<<"\n Address :"<<itr<<"\n Value :"<<*itr;

    int *itr1=container1.end(); //end() will return a  element address next to the last element
      itr1--;
     cout<<"\n Address :"<<itr1<<"\n Value :"<<*itr1;
    return 0;
}