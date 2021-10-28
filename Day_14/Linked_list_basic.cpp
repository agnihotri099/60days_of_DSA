#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int val){
     data=val;
     next=NULL;
    }
};


void insertAtTail(node * &head,int val){
    
    node *n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp->next=n;
       
    }
}

void insertAtHead(node * &head,int val){
    node * n=new node(val);
    n->next=head;
    head=n;
}


void display(node *head){
  node * temp=head;
  while(temp!=NULL){
      cout<<temp->data<<"->";
  }
  cout<<"NULL"<<endl;
}

void deletehead(node * &head){
    node * todelete=head;
    head=head->next;
    delete todelete;
}

void deletion(node * &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deletehead(head);
        return;
    }
    node *temp=head;
    while(temp->next->data!=val){
        temp=temp->next;

        node * todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }
}

int main(){

 node *head=NULL;   





return 0;
}