#include<pranav.h>
using namespace std;
int main()
{
    //Deque is doubly ended queue . we can insert or delete elements from front as well as back.
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);

    for(deque<int>::iterator it=dq.begin();it!=dq.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();

    for(deque<int>::iterator it=dq.begin();it!=dq.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"element at front = "<<dq.front()<<endl;
    cout<<"element at back = "<<dq.back()<<endl;


}
