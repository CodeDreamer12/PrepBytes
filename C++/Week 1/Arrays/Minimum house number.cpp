#include <bits/stdc++.h>
using namespace std;

  int main()
  {
   int t;
   cin>>t;
   while(t!=0){
     int n,i;
     cin>>n;
     int arr[n];
     int minIndex=0;
     for(i=0; i<n; i++){
       cin>>arr[i];
     }
     int min=arr[0];
     for(i=1; i<n; i++){
       if(arr[i]<min){
         min=arr[i];
         minIndex=i;
       }
     }
    cout<<minIndex<<endl;
     t=t-1;
   }
    return 0;
  }
