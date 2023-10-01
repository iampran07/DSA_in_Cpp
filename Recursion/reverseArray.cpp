#include<iostream>
using namespace std;

//function to reverse an array with recursion using single pointer
//swap function is used to swap the array.

int reverseArray(int n,int arr[],int i){
    if(i>=(n/2)){
        return arr[n];
    }
    else{
        swap(arr[i],arr[n-i-1]);
        reverseArray(n, arr, i+1);
    }
    return NULL;
}
int main()
{
    int n;
    cout<<"\nEnter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nElements of array by straight order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
     arr[n]=reverseArray(n,arr,0);
    cout<<"\nElements of array by reverse order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
