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


void display(node * &head){
    node *temp=head;

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}


void insertAthead(node * &head,int val){
  node * n=new node(val);

  if(head==NULL){
      n->next=n;
      head=n;
      return;
  }
  node * temp=head;

  while(temp->next!=head){
      temp=temp->next;
  }

  temp->next=n;
  n->next=head;
  head=n;



}

void insertAtend(node * &head,int val){
    if(head==NULL){
        insertAthead(head,val);
        return;
    }
    node *n=new node(val);
   node * temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;


}






int main(){
node * head=NULL;
insertAtend(head,2);
insertAtend(head,3);
insertAtend(head,4);
insertAtend(head,5);
insertAtend(head,6);
insertAtend(head,7);
insertAthead(head,1);
display(head);

    return 0;
}