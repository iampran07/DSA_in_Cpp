#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //initialzing syntax
    deque<int>d;

    //to add elements in deque
    d.push_back(10);
    d.push_front(20);

    //to print
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    
    //to delete elements 
    //d.pop_back();
    //d.push_front();

    cout<<"\nSize before erase function: "<<d.size();
    d.clear();
    cout<<"\nSize after clear function: "<<d.size();
    return 0;
}