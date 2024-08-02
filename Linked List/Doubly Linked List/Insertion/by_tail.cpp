#include<iostream>
#include<vector>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};

Node* convert2DLL(vector<int> arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* insertTail(Node* head,int val){
    if(head==NULL){
        Node* temp=new Node(val);
        return head;
    }
    Node* temp=head;
    while(temp->next){
        temp=temp->next;
    }
    Node* result=new Node(val,nullptr,temp);
    temp->next=result;
    return head;
}

int main(){
    vector<int> arr={2};
    Node* head=convert2DLL(arr);
    head=insertTail(head,100000);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}