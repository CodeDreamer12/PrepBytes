#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m,n,i,j;
    cin>>m>>n;
    int arr[m][n];
    for(i=0; i<m; i++){
      for(j=0; j<n; j++){
        cin>>arr[i][j];
      }
    }
    for(i=0; i<m; i++){
      for(j=0; j<n; j++){
       if(i<j){
         cout<<"0"<<" ";
       }
       else{
         cout<<arr[i][j]<<" ";
       }
      }
      cout<<endl;
    }
    for(i=0; i<m; i++){
      for(j=0; j<n; j++){
       if(i>j){
         cout<<"0"<<" ";
       }
       else{
         cout<<arr[i][j]<<" ";
       }
      }
      cout<<endl;
    }
    
    return 0;
  }
