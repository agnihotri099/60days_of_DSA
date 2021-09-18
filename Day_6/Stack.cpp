#include <iostream>
using namespace std;

#define n 100
class Stack{
    int *arr;
    int top;

    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }


    void push(int val){
        if(top==n-1){
            cout<<"Overflow"<<endl;
            return;        
        }
        top++;
        arr[top]=n;
    }

    void pop(){
        if(top==-1){
            cout<<"Underflow"<<endl;
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"stack is empty"<<endl;
            return -1; 
        }
        return arr[top];
    }





};

int main(){

    Stack st;
    st.push(1);
    st.push(2);
    st.pop();
    st.pop();
    st.pop();
    st.Top();





    return 0;
}