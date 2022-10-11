#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0; i<n; i++){
       cin>>arr[i];
     }
    if(arr[n-1]==0){
      cout<<"-1"<<endl;
    }
     for(int i=0; i<n; i++){
       if(arr[i]==1){
         cout<<i<<endl;
         break;
       }
     }
    
   }
    
    return 0;
  }
