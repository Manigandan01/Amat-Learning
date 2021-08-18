/*  This Code Snippet Demonstrates Array data Structre and How it Works */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    // Array declaration by initializing it
    // As the Size is Greater than the Number of elements
        // by default the remaining elements will be Zero i.e array[7] will have "0" in the memory
    int array[]={78,98,88,78,98,23};

    //Creating iterator element for Accessing Array elements
    int iterator=0;

    //for loop for iterating through elements of Array element "array"
    for(iterator;iterator<6;iterator++)
    {
        cout<<"The "<<iterator<<"th Element is :"<<array[iterator]<<endl;
    }

    //for Sorting the Elements use: Sort() function
    int length= sizeof(array)/sizeof(array[0]);
    sort(array , array+length);
    cout<<endl<<"After Sorted Array elemnts are : ";
    for(iterator=0;iterator<length;iterator++)
    {
        cout<< array[iterator]<<" ";
    }

    //sum,max,min functions in STL
    cout<<"\n\nSum of Array : "<< accumulate(array,array+length,0);
    cout<<"\nMax Element : "<< *max_element(array,array+length);
    cout<<"\nMin Element : "<< *min_element(array,array+length);
    return 0;

}