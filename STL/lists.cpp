#include<pranav.h>
using namespace std;

int main()
{
    list<int>ls;

    //doubly linked list is maintained for the list
    //while singly is maintained for the vectors.
    //so list is more eficient than vectors

    ls.push_back(10);
    ls.push_front(20);
    for(list<int>::iterator it=ls.begin();it!=ls.end();it++){
        cout<<*it<<" ";
    }

    //All other functions are same as that of vectors.
}