#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertToLL(int arr[]){
     Node* head=new Node(arr[0]);
     Node* mover=head;
    for(int i=1;i<10;i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

Node* reverseLL(Node* head){
    Node* last=nullptr;
    Node* current=head;
    Node* next=nullptr;

    while(current){
        next=current->next;
        current->next=last;
        last=current;
        current=next;
    }
    return last;
}

int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    Node* ans=convertToLL(arr);
    cout<<"Before reverse: ";
    while(ans){
        cout<<ans->data<<" ";
        ans=ans->next;
    }
    cout<<endl;
    ans=convertToLL(arr);
    Node* result=reverseLL(ans);
    cout<<"After reverse: ";
    while(result!=nullptr){
        cout<<result->data<<" ";
        result=result->next;
    }
    return 0;
}