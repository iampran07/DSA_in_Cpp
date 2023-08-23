#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int start=0;
    int end=size-1;
   // int mid=(start+end)/2;
    while(start<=end){
        int mid=start+((end+start)/2);
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
       mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int arr[5]={23,44,55,67,78};
    int index=binarysearch(arr,5,67);
    if(index==-1){
        cout<<"Not Found.";
    }
    else{
        cout<<"90 is present at "<<index;
    }
    return 0;
}