#include<iostream>
#include<vector>
using namespace std;
//Vector internally uses Dynamic Array Concept

int main()
{
    vector <int>v={1,2,3,4,5,6};
    vector <int> :: iterator it=v.begin();
     cout<<"Elements of Vector : ";
    while(it!=v.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //Above Print Statement can be also Writtened as
    /*for(int i=0;i<v.size();i++)
    {
        //or cout<<v[i]; //or cout<<v.(i);
    }*/
    
    //INITIALIZING A VECTOR WITH SIZE OF EXISTING VECTOR
    vector <int> v1(v.begin(),v.end());
    
    cout<<" Size of V1 Vector: "<<v1.size();

    //Inserting Operations
   vector <int>v2={67,89,-433,5666};
   vector <int> ::iterator it1=v2.begin();
    it1=it1+1;
    v2.insert(it1,-87666);
    cout<<"\nValues of V2 :";
    it1=v2.begin();
      while(it1!=v2.end())
      {
          cout<<*it1<<" ";
          it1++;
      }

      //Inserting by Range
      it=v.begin();
      vector<int> :: iterator it2=it+3;
      it1=v2.begin();
      it1=it1+1;
      v2.insert(it1,it,it2);
      cout<<"\nValues of V2 after Inserting :";//it is inclusive and it2 is exclusive 
    it1=v2.begin();
      while(it1!=v2.end())
      {
          cout<<*it1<<" ";
          it1++;
      }

      //same for erase()

      //capacity() will take care of
      


        

      return 0;

}