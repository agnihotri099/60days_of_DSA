#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node * next;

    node(int val){
        data=val;
        next=NULL;

    }};
    void deletehead(node *head){
            node *todelete=head;
            head=head->next;
            delete todelete;

    }

    void deletion(node *head,int val){

       if(head==NULL){
           return;
       }
       if(head->next==NULL){
            deletehead(head);
            return;
       }
        node *temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
       
        node * todelete=temp->next;
         temp->next=temp->next->next;
        delete todelete;
    }

    void insertATtail(node* &head,int val){

        node * n=new node(val);
        if(head==NULL){
            head=n;
            return;
        }

        node * temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=n;
    }
    void display(node * head){
        node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

    void insertATstart(node * &head,int val){
        
        node * n=new node(val);
        n->next=head;
        head=n;
    }

    node *reverse(node *head){
        node * currentptr=head;
        node * previousptr=NULL;
        node * nextptr;
        while(currentptr!=NULL){
            nextptr=currentptr->next;
            currentptr->next=previousptr;

            previousptr=currentptr;
            currentptr=nextptr;
        }
        return previousptr;
    }



int main(){

node * head=NULL;
insertATstart(head,1);
insertATtail(head,2);
insertATtail(head,3);
deletion(head,2);
insertATtail(head,2);

display(head);
node * newhead=reverse(head);
display(newhead);

   return 0;
}