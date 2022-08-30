#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      int n,k,i;
      cin>>n>>k;
      int arr[n];
      for(i=0; i<n; i++){
        cin>>arr[i];
      }
      int max_sum=0;
      int curr_sum=0;
      for(i=0; i<k; i++){
        curr_sum=curr_sum+arr[i];
      }
      max_sum=curr_sum;
      for(i=k; i<n; i++){
        curr_sum=curr_sum+arr[i]-arr[i-k];
        if(curr_sum>max_sum)
          max_sum=curr_sum;
        
      }
      cout<<max_sum<<endl;
    }
    
    return 0;
  }
