#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>v;
    //capacity of vector- the memory allocated for the vector.
    cout<<"\nCapacity is: "<<v.capacity();

    //size of vector-the size of vector is elements of an array.
    cout<<"\nSize of vector is: "<<v.size();

    //insertion in an vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //capacity
    cout<<"\nCapacity: "<<v.capacity();

    //size
    cout<<"\nSize: "<<v.size();

    //printing vector
    cout<<"\nElements in vector are: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    //to create one vector into another
    vector<int>last(v);
    cout<<"\nelements in another vector: ";
    for(int j=0;j<last.size();j++){
        cout<<last[j]<<" ";
    }
    //deleting elements
    v.pop_back();
    v.pop_back();
    v.pop_back();
    
    cout<<"\nVector after deletion: ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<"\nNow the capacity: ";
    cout<<v.capacity();
    cout<<"\nAnd size is: ";
    cout<<v.size();

    //Can create array of same elements
    //syntax :- vector<datatype>name[size,element]
    //vector<int>v1(5,1);
    
}