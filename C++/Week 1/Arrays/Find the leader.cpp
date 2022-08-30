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
      int max=0;
      for(int i=n-1; i>=0; i--){
        if(arr[i]>=max){
          max=arr[i];
          cout<<max<<" ";
        }
      }
      cout<<endl;
    }
    
    return 0;
  }
