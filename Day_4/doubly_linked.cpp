#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node *prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};


void insertAThead(node * &head,int val){
    node *n=new node(val);
    n->next=head;
    if(head!=NULL){
 head->prev=n;
    }
   
    head=n;
}

void insertATtail(node * &head,int val){
    if(head==NULL){
        insertAThead(head,val);
        return;
    }
    node *n =new node(val);
    node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;

}

void display(node * &head){
node * temp=head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<endl;




}

void deletenode(node * &head,int pos){
    node *temp=head;
    int count=1;
    while(temp!=NULL &&  count!=pos){
        temp=temp->next;
        count++;

    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }

    delete temp;

}



int main(){
    node  * head=NULL;
 insertATtail(head,1);
insertATtail(head,2);
insertATtail(head,3);
insertATtail(head,4);
insertATtail(head,5);
insertATtail(head,6);
insertATtail(head,7);
insertATtail(head,8);

display(head);
deletenode(head,3);
display(head);







    return 0;
}