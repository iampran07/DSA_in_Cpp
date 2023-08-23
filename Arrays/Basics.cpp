#include<iostream>
using namespace std;

int main(){
    //array declarations---1 dimension

    //static array
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<" "<<arr[i];
    }
    

    //dynamic array
    int size;//size of an array
    

    cout<<"\nEnter size: ";
    cin>>size;
    int array[size];

    //Initializing array

    cout<<"\nEnter array elements: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }


    //printing array
    for(int i=0;i<size;i++){
        cout<<" "<<array[i];
    }

}
