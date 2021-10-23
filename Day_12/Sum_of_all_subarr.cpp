#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter no of elements in array"<<endl;
cin>>n;

int arr[n];
for (int i = 0; i < n; i++)
{
    cout<<"enter "<<i<<"th element of array: "<<endl;
    cin>>arr[i];
}


int curr=0;

for(int i=0;i<n;i++){
    curr=0;
    for(int j=i;j<n;j++){
        curr+=arr[j];
        cout<<curr<<" ";
    }
}








    return 0;
}