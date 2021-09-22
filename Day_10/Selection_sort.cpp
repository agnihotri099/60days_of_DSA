#include<iostream>
using namespace std;


void selection_sort(int arr[],int size){

int min;
for(int i=0;i<size-1;i++){
    min=0;
    for(int j=i+1;j<size;j++){

    if( arr[j]<arr[min]){
    min=j;
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}
    }
    






}




int main(){
int n;
cout<<"enter size of an array: "<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter "<<i<< " element of array: " <<endl;
    cin>>arr[i];
}

selection_sort(arr, n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   
}



    return 0;
}