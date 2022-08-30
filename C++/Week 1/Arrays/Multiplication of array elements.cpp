#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t!=0){
     int n,i,j;
     cin>>n;
     int arr[n];
     for(i=0; i<n; i++){
       cin>>arr[i];
     }
     int multiply=1;
     for(j=0; j<n; j++){
       multiply=multiply*arr[j];
     }
     cout<<multiply<<endl;

     t=t-1;
   }
    
    return 0;
  }
