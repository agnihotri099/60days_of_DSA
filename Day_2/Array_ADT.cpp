#include<iostream>
using namespace std;

class ADT{
private:
int capacity;
int lastindex;
int * ptr;

public:
ADT(){
    capacity=0;
    lastindex=-1;
    ptr=NULL;
}

void createArray(int capacity);
int getitem(int index);
void setitem(int index,int value);

};
void ADT::setitem(int index,int value){
    if(lastindex>capacity-1){
        cout<<"overflow"<<endl;
    }
    else if(index>capacity-1  || index<0){
        cout<<"invalid index"<<endl;
    }
    else if(index>=0 && index<=capacity-1){
        lastindex++;
        ptr[lastindex]=value;

    }
}




int ADT::getitem(int index){

if(lastindex==-1){
    cout<<"list is empty"<<endl;
    return -1;
}
if(index>lastindex || index<0){
    cout<<"invalid index"<<endl;
    return -1;
}
return ptr[index];


}

void ADT :: createArray(int capacity)
{
    this->capacity=capacity;
    lastindex=-1;
    ptr=new int[capacity];
}

int main(){


ADT l1;
l1.createArray(10);
l1.setitem(3,68);
l1.getitem(2);




    return 0;
}
