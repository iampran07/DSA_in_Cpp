#include<iostream>
using namespace std;

//function to reverse an array without recursion

int reverseArray(int n,int arr[],int i,int j){
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return arr[n];
}
int main()
{
    int n;
    cout<<"\nEnter size of array: ";
    cin>>n;
    int arr[n],i=0,j=n-1;
    cout<<"\nEnter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nElements of array by straight order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
     arr[n]=reverseArray(n,arr,i,j);
    cout<<"\nElements of array by reverse order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
