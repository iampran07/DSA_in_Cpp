//Vector is used when we don't know the exact size of input or elements which will be required.
//in short it is a dynamic array.
#include<pranav.h>
using namespace std;

int main(){
    //empty vector is defined. Size-->0
    vector<int>v;

    //to insert . v--> {10}
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //same as push_back method but more faster
    //v.__emplace_back(20);
    
    //to print elements of vector
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    //use of pair in vectors
    vector<pair<int,int> > vec;

    //when we use push_back method for pair we have to insert elements using curly braces.
   // vec.push_back({1,2});

    //if we use emplace_back method then don't need to use curly braces.
  //  vec.__emplace_back(3,4);

    //for(int i=0;i<vec.size();i++){
    //cout<<vec[i].first<<endl<<vec[i].second;
    //}
    cout<<endl;
    vector<int>vec1(5,100);
    //output will be --> {100,100,100,100,100}

    vector<int>vec2(5);
    //output will be-->{0,0,0,0,0}

    //vector inside another vector
    vector<int>vec3(vec2);

    //iterators
    vector<int>::iterator it;
   // for(it=v.begin();it!=v.end();it++){
     //   cout<<*it<<endl;
    //}
    
    //it=v.end();
    //it means iterator is pointing to somewhere after the immediate last element.
    //IT IS NOT POINTING TO LAST ELEMENT.

    //reverse iterators
    //it=v.rend();
    //it=v.rbegin(); //pointing to somewhere before starting element

    //erase elements from vector
    //current elements --> {10,20,30,40,50}
    v.erase(v.begin()+1,v.begin()+3);
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }//{10,40,50}
    cout<<endl;
    /*
        if we want to delete 20,30 then we have to provide
        their locations
        20 --> v.begin()+1
        30 -->v.begin()+2
        but to delete 20,30 we have to provide location
        of next element of 30 i.e. v.begin()+3
    */

   //INSERT FUNCTION
   vector<int>v1;
   v1.push_back(100);
   v1.push_back(200);
   v1.push_back(300);
   v1.push_back(400);
   v1.push_back(500);
   for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //now if we want to insert 10 then we can use insert function.
    //insert function requires location at which we want to insert element.
    v1.insert(v1.begin(),10);
   for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //if we want to insert at position 2
    v1.insert(v1.begin()+2,20);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //pop_back
    v1.pop_back();
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //swap vectors
    v1.swap(v);
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"vector is empty??"<<"-->"<<v1.empty()<<endl;   //0 i.e. false

    //clears eveything
    v1.clear();
    cout<<"vector is empty??"<<"-->"<<v1.empty()<<endl;   //1 i.e. True
}
