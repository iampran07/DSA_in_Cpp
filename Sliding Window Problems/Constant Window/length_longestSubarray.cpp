//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
int maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here 
       int l=0, r=0, maxlen=0, sum=0, ansStart=0, ansEnd=0;
       while(r<N){
        sum+=arr[r];
        if(sum>K && l<=r){
            sum-=arr[l];
            l++;
        }
        maxlen=max(maxlen,r-l+1);
        r++;
       }
       return maxlen;
}

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        int ans=maximumSumSubarray(K,Arr,N);
        cout<<ans<<endl;
    }
    return 0; 
} 
// } Driver Code Ends