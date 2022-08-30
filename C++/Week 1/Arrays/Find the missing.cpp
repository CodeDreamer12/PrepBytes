#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     long long n;
     cin>>n;
     int arr[n-1];
     for(int i=0; i<n-1; i++){
       cin>>arr[i];
     }
    long long total=(n*(n+1))/2;
    long long sum=0;
     for(int i=0; i<n-1; i++){
       sum=sum+arr[i];
     }
     cout<<total-sum<<endl;
   }
    
    return 0;
  }
