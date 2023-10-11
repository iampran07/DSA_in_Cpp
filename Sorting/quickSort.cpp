#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/**
        QUICK SORT : -
                    Quick sort is a sorting technique based on divide and conquer technique.
            Step 1: First pickup the pivot element from the array. and put it in it's correct position
                  Pivot element can be :-  1.First element of an array.
                                   2. Last element
                                   3. median of array
                                    4.any random element
                step 2: smaller elements will be on left side and larger elements will be on right side.
    O(NlogN)
 */

//This function will return index at which pivot element should be placed.
int pindex(vector<int>&arr,int low,int high){
    int piv=arr[low],i=low,j=high;
    //basic condition should be low<high
    while(i<j){
        //if elements pointed by i are greater than pivot then we have to stop
        //oterwise increase pointer i;
        while(arr[i]<=piv && i<=high-1){
            i++;
        }
        //if elements pointed by j are lesser than pivot then we have to stop
        //oterwise decrease pointer j;
        while(arr[j]>piv && j>=low+1){
            j--;
        }
        //after getting out of while conditions from both side i.e. after stopping increment and decrement of i and j , if i<j then we have to swap as to complete step number 2.
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    //this swap is to be done as to put the pivot element on the correct position. the place pointed by j after getting out of while loop is the correct position for pivot element.
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(vector<int>&arr,int low,int high){
    //elements should be more than one. if low is less than high then only we can say that there are more than 1 elements in an array.
    if(low<high){
        int pivot=pindex(arr,low,high);
        //recursive function for smaller elements than pivot.
        quicksort(arr,low,pivot-1);
        //function call for larger elements than pivot
        quicksort(arr,pivot+1,high);
    }
}

int main(){
    vector<int>arr;
    int n;
    cout<<"\nEnter size of array";
    cin>>n;
    cout<<"\nEnter elements in an array: ";
    int a;
    for(int j=0;j<n;j++){
        cin>>a;
        arr.push_back(a);
    }
    cout<<"\nArray before sorting is: ";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<"\nArray after sorting is: ";
    quicksort(arr,0,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}
