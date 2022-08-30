#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     int n,i;
     int sum=0;
     cin>>n;
     
     int arr[n];
     for(i=0; i<n; i++){
       cin>>arr[i];
     }
     for(i=0; i<n; i++){
          sum=sum+arr[i];
     }
     for(i=n-1; i>=0; i--){
        if(sum==0){
            cout<<"-1"<<endl;
            break;
        }
        else{
             if(arr[i]==1){
         cout<<i<<endl;
         break;
             }
        }
     }
   }
    return 0;
  }
