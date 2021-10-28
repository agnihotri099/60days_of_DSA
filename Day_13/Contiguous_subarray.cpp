#include<bits/stdc++.h>
#include<climits>
#include <cstdlib>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
     int n,pd,curr=2;
     cout<<"enter length of array: "<<endl;
     cin>>n;
     int a[n];
     cout<<"enter elements in array: "<<endl;
     for (int i = 0; i < n; i++)
     {
      cin>>a[i];   
     }
     
     
     pd=abs(a[1]-a[0]);
     int ans=0;

     for(int i=2;i<n;i++){
     if(pd==abs(a[i]-a[i-1])){

         curr++;
     }
     else{
         pd=abs(a[i]-a[i-1]);
         curr=2;
     }
     
     ans=max(curr,ans);
     

     }
     cout<<ans;
    
        }
    



    return 0;
}