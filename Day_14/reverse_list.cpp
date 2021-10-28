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
        temp=temp->next;
    }
    temp->next=n;
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
      temp=temp->next;
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

node * reverse_list(node * &head){
    node *prevptr=NULL;
    node *currptr=head;
    node *nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;

    }
    return prevptr;
}

int main(){

 node *head=NULL;   
 insertAtTail(head,1);
 insertAtTail(head,2);
 insertAtTail(head,3);
 insertAtTail(head,4);
 insertAtTail(head,5);
 display(head);
 node * newhead=reverse_list(head);
 display(newhead);


return 0;
}