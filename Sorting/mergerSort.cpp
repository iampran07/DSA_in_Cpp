#include<iostream>
#include<vector>
using namespace std;

/*
    Merge Sort --
                Merge sort is based on divide and merge approach.
    1. First we divide whole array into small parts .
    2. Continue above process till we get one element in an array.
    3. Compare every single element with adjacent one
    4.Merge them into array.
 
 Time Complexity --> O(logN)
 
 We require 2 functions.
 1. for dividing elements into smaller parts.
 2.merging the sorted part.
 
 */

//this function merges two sorted array into one single sorted array.
void mrge(vector<int>&arr,int low,int high,int mid){
    //for merging two sorted array into one
    vector<int>temp;
    
    //2 pointers for 2 arrays.
    int left=low;
    int right=mid+1;
    
    //condition 1 for merging two arrays
    while(left<=mid && right<=high){
        //if element pointed by left pointer is small than that of pointed by right then push it into dummy vector.
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        //else right is smaller then push right one.
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    //if in case right side elements are over then we can push all left side elements into an array.
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    //same for right side array.
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    
    //we are inserting elements into array from dummy array.
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

//this recursive function is for sorting the elements
void mrgsort(vector<int> &arr,int low,int high){
    //base condition if low and high are equal then we have to stop and return.
    if(low>=high){
        return;
    }
    
    //creating mid element to divide the array.
    int mid=(low+high)/2;
    //calling mrgsort function recursively for first sub array from index 0 to mid index
    mrgsort(arr,low,mid);
    //calling mrgsort function recursively for second sub array from index mid+1 to high index
    mrgsort(arr,mid+1,high);
    //calling mrge function to merge th two sorted arrays.
    mrge(arr,low,high,mid);
}


int main(){
    int n=5;
    vector<int>arr={3,1,2,1,2};
    cout<<"\nArray before sorting: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"\nArray after sorting: "<<endl;
    mrgsort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
