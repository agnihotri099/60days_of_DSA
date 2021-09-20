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

class queue{
  
  node * front;
  node * back;
public:

  queue(){
      front=NULL;
      back=NULL;
  }


  void enqueue(int val){
      node *n=new node(val);
      if(front==NULL){
          front=n;
          back=n;
      }
      back->next=n;
      back=n;
  }

  void dequeue(){
      if(front==NULL){
          cout<<"underflow"<<endl;
          return;
      }
      node *todelete=front;
      front=front->next;
      delete todelete;
  }


  int peek(){
        if(front==NULL){
          cout<<"underflow"<<endl;
          return -1;
      }
      return front->data;
  }

};


int main(){


    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
        





    return 0;
}