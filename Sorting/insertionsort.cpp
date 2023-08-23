#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//important
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int current=arr[i];
        while(current<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}

int main()
{
    int n;
    cout<<"\nEnter a size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter elements in an array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nArray before sorting: ";
    printarray(arr,n);

    insertion(arr,n);
     cout<<"\nArray after sorting: ";
    printarray(arr,n);
}