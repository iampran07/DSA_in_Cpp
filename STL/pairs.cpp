//This program is to understand the concept of pairs in c++ language.

#include<pranav.h>
using namespace std;
int main()
{
    //for only 2 elements
    pair<int,int>p;
    p.first=1,p.second=2;
    cout<<"{"<<p.first<<" , "<<p.second<<"}";
    cout<<endl;

    //for more than 2 elements
    pair<int,pair<int,int> >p1;
    p1.first=10;
    p1.second.first=20;
    p1.second.second=30;
    cout<<"{"<<p1.first<<" , "<<"{"<<p1.second.first<<" , "<<p1.second.second<<"}"<<"}";
    cout<<endl;

    //we can create an array for pairs
    pair<int,int>arr[3];
    arr[0].first = 1 , arr[0].second=2;
    arr[1].first = 3 , arr[1].second=4;
    arr[2].first = 5 , arr[2].second=6;
    for(int i=0;i<3;i++){
        cout<<arr[i].first<<" "<<arr[i].second;
        cout<<endl;
    }


}
