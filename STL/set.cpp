#include<pranav.h>
using namespace std;

int main()
{
    //SETS can store elements which need to be unique.
    //does not allow for data duplication
    //always stores data in sorted mannner.
    //elements are stored in a tree manner
    //everything is in log(n)
    set<int>s;
    s.insert(2);
    s.insert(10);
    s.insert(5);
    s.insert(3);
    s.insert(8);
   
   set<int>::iterator i;
   for(i=s.begin();i!=s.end();i++){
    cout<<*i;
   }
    
    //find function returns the address of particular element
    auto it=s.find(2);

    //Lower Bound --> gives address of first occurence of an element
    auto it1=s.lower_bound(3);

    //Upper Bound --> gives address of immediate next greater element of key
    auto it2=s.upper_bound(5);
}
