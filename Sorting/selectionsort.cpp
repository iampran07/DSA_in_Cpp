#include<iostream>
using namespace std;

void selectsort(int arr[],int n){
    int minIndex;
    for(int i=0;i<n-1;i++){
        minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                int temp=arr[j];
                arr[j]=arr[minIndex];
                arr[minIndex]=temp;
            }
        }
    }
    cout<<"\nAfter Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nBefore after sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    selectsort(arr,n);
    return 0;

}