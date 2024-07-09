#include<iostream>
#include<map>
using namespace std;


//map stores value in sorted order and only those element/char are stored
//which are present
//maps are very beneficial in hashing.

int main()
{
    int n;
    cin>>n;
    int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];
    
    map<int,int>mp;
    for(int i=0;i<n;i++)
        mp[arr[i]] +=1;
    
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mp[num]<<endl;
    }
    return 0;
}
