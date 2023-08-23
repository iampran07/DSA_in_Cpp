/*
for eg.(Output)
Array elements (before sorting) are: 12 23 7 2 
Array elements after sorting (in ascending order) are: 2 7 12 23 
Array elements after sorting (in descending order) are: 23 12 7 2
*/


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"\nSize of an array: ";
    cin>>n;
    int arr[n];

    cout<<"\nEnter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nArray elements (before sorting) are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    cout<<"\nArray elements after sorting (in ascending order) are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nArray elements after sorting (in descending order) are: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }



}