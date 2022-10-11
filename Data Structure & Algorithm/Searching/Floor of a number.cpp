#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n,x;
      cin>>n>>x;
      int arr[n];
      for(int i=0; i<n; i++){
        cin>>arr[i];
      }
      int min=arr[0];
      for(int i=1; i<n; i++){
        if(min>arr[i]){
          min=arr[i];
        }
      }
      if(x<min){
        cout<<"-1"<<endl;
      }
      for(int i=n-1; i>=0; i--){
        
        if(arr[i]<=x){
          cout<<i<<endl;
          break;
        }
      }
    }
    
    return 0;
  }
