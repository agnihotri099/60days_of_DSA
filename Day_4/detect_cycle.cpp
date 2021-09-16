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


    void makecycle(node * &head,int pos){

        node * temp=head;
        node * startnode;
        int count=1;
        while(temp->next!=NULL){
            if(count==pos){
                startnode=temp;
            }
            temp=temp->next;
            count++;
        }

        temp->next=startnode;




    }


    bool detectcycle(node * &head){
        node * fast=head;
        node * slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }


        }
        return false;
    }

    void removalcycle(node * &head){


        node * fast=head;
        node * slow=head;
        do{
            fast=fast->next->next;
            slow=slow->next;
        }while(slow!=fast);

        fast=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;

        }
        slow->next=NULL;
    }



int main(){

node * head=NULL;
insertATtail(head,1);
insertATtail(head,2);
insertATtail(head,3);
insertATtail(head,4);
insertATtail(head,5);
insertATtail(head,6);
insertATtail(head,7);
insertATtail(head,8);
display(head);
makecycle(head,3);
//display(head);
cout<<detectcycle(head)<<endl;
removalcycle(head);
cout<<detectcycle(head)<<endl;

   return 0;
}