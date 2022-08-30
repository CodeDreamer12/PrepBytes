#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
  int m,n,k;
  cin>>m>>n>>k;
  int matrix[m][n];
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cin>>matrix[i][j];
    }
  }
  for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
      cout<<k*matrix[i][j]<<" ";
    }
    cout<<endl;
  }
    
    return 0;
  }
