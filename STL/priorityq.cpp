#include<pranav.h>
using namespace std;

int main(){
    priority_queue<int>pq;

    //MAX heap
    //elements are inserted in DECSENDING ORDER 
    //same as stack but has elements assigned with some priority.
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

//now if we insert 45 then it adds 45 in between 40 and 45.

    while(!pq.empty()){
        cout<<pq.top()<<endl;
        pq.pop();
    }


    //MIN heap
    //inserts elements in ASCENDING order.
    priority_queue<int , vector<int> , greater<int> > pq1;
    pq1.push(8);
    pq1.push(3);
    pq1.push(5);
    pq1.push(2);
    pq1.push(10);

    while(!pq1.empty()){
        cout<<pq1.top()<<endl;
        pq1.pop();
    }

}

