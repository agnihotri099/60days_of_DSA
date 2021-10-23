#include<bits/stdc++.h>
#include<climits>
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

int maxNO=INT_MIN;



for (int i = 0; i < n; i++)
{
    maxNO=max(maxNO,arr[i]);
  cout<<"maximum element at "<<i<<"th position is: "<<maxNO<<endl;


}



return 0;
}