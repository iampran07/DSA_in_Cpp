#include<pranav.h>
using namespace std;

int main(){

    //MULTISET is same as that of set
    //But Multiset can store duplicate values also.
    multiset<int>ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);

    //5 occurrences of 10 are stored in multiset

    multiset<int>::iterator it;
    it=ms.begin();
    while(it!=ms.end()){
        cout<<*it<<endl;
        it++;
    }

    //all occureences of 10 are deleted.
    ms.erase(10);

    int cnt=ms.count(10);

    //only 1 occurrence of 10 is deleted.
    ms.erase(ms.find(10));

    //2 occurrences of 10 are deleted
    ms.erase(ms.find(10));
    ms.erase(ms.find(10));

    return 0;
}