#include<iostream>
#include<map>
using namespace std;


//map stores value in sorted order and only those element/char are stored
//which are present

int main()
{
    string s;
    cin>>s;
    
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
        mp[s[i]-'a'] +=1;
    
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<ch<<" --> "<<mp[ch-'a']<<endl;
    }
    return 0;
}
