//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int N){
        // code here 
        int l=0, r=K-1;
        long sum=0, maxSum=0;
        for(int i=l;i<=r;i++){
            sum+=(long)arr[i];
        }
        maxSum=sum;
        
        while(r<N-1){
            sum-=(long)arr[l];
            l++;
            r++;
            sum+=(long)arr[r];
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};

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
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends