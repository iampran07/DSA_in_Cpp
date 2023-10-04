#include<iostream>
#include<vector>
using namespace std;

void printsubseq(int idx,int arr[],vector<int>&ds,int n){
    
    //if index reaches n then print the ds.
    if(idx==n){
        for(auto it:ds){
            cout<<it<<" ";
        }
        
        //condtion for idx=0 then print only curly barces.
        if(ds.size()==0){
            cout<<"{}"<<" ";
        }
        cout<<endl;
        return;
    }
    //condition for not take case
    printsubseq(idx+1, arr, ds, n);
    
    //condition for take case
    ds.push_back(arr[idx]);
    printsubseq(idx+1, arr, ds, n);
    ds.pop_back();
}
int main()
{
    int n;
    vector<int>ds;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nSubseqence of given array are: "<<endl;
    printsubseq(0, arr, ds, n);
    return 0;
}
