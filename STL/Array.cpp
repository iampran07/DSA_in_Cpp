#include<iostream>
#include<array>
using namespace std;

int main(){
    //syntax
    //array<datatype,size>name;
    array<int,4>a={2,3,4,5};

    //printing
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    
    //finding particular element
    cout<<"\nElement at 2nd index: "<<a.at(2);
    
    //to find whether array is empty or not
    cout<<"\nIs array empty? "<<a.empty();

    //to get the front element of the array
    cout<<"\nFirst element of an array: "<<a.front();

    //last element of an array
    cout<<"\nLast element of an array: "<<a.back();

    
}
