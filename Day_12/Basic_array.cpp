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
int minNO=INT_MAX;



for (int i = 0; i < n; i++)
{
    maxNO=max(maxNO,arr[i]);
    minNO=min(minNO,arr[i]);
}


cout<<"maximum element is: "<<maxNO<<endl;
cout<<"minimun element is: "<<minNO<<endl;




    return 0;
}