#include<iostream>
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

Node* convert2DLL(int arr[]){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<5;i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

Node* insertPosition(Node* head,int position,int val){
    if(head==NULL){
        Node* temp=new Node(val);
        return head;
    }
    if(position==1){
    Node* temp=new Node(val,head,nullptr);
    head->prev=temp;
    return temp;
    }
    int count=0;
    Node* temp=head;
    Node* back=temp;
    while(temp){
        count++;
        if(count==position){
            Node* result=new Node(val,temp,back);
            back->next=result;
            temp->prev=result;
            break;
        }
        back=temp;
        temp=temp->next;
    }
    if(count==0){
        Node* tail=new Node(val,nullptr,temp->prev);
        (temp->prev)->next=tail;
    }
    return head;
}

int main(){
    int arr[5]={2,10,30,60,90};
    Node* head=convert2DLL(arr);
    head=insertPosition(head,2,5);
    head=insertPosition(head,6,100);
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    return 0;
}