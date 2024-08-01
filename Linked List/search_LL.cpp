#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next1=next;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertToLL(int arr[]){
     Node* head=new Node(arr[0]);
     Node* mover=head;
    for(int i=1;i<5;i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

bool search(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val) return true;
        temp=temp->next;
    }
    return false;
}

int main() {
    int arr[5]={2,5,9,10};
    Node* ans=convertToLL(arr);
    bool result=search(ans,51);
    cout<<result;
    return 0;
}