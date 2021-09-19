#include<iostream>
using namespace std;
#define n 20

class queue{
    public:
    int * arr;
    int front;
    int back;


    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

   void enqueue(int data){
       if(back==(n-1)){
           cout<<"queue is overflow"<<endl;
           return;
       }
       back++;
       arr[back]=data;
       if(front==-1){
           front++;
       }

   }

   void dequeue(){
       if(front==-1 || front>back){
           cout<<"underflow"<<endl;
           return;
       }
       front++;
   }


   int peek(){
       if(front==-1 || front>back){
           cout<<"underflow"<<endl;
           return -1;
       }
       return arr[front];

   }




};

int main(){

  queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  q.enqueue(6);
  q.dequeue();
  cout<<q.peek()<<endl;
  q.dequeue();
  cout<<q.peek()<<endl;
  q.dequeue();
 cout<<q.peek()<<endl;








    return 0;
}
