#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
  int n,i;
  int even=0;
  int odd=0;
  cin>>n;
  int arr[n];
  for(i=0; i<n; i++){
    cin>>arr[i];
  }
  for(i=0; i<n; i++){
    if(arr[i]%2==0){
      even++;
    }
    else{
      odd++;
    }
  }
  int b[even];
  int k[odd];
  int j=0;
  int l=0;
  for(i=0; i<n; i++){
    if(arr[i]%2==0){
      b[j]=arr[i];
      j++;
    }
    else{
      k[l]=arr[i];
      l++;
    }
  }
  for(i=0; i<even; i++){
    cout<<b[i]<<" ";
  }
  cout<<endl;
  for(i=0; i<odd; i++){
    cout<<k[i]<<" ";
  }
    
    return 0;
  }
