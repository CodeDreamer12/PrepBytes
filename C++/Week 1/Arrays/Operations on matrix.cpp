#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int rows,cols;
    cin>>rows>>cols;
    
    int a[rows][cols],b[rows][cols];
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        cin>> a[i][j];
      }
    }
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        cin>> b[i][j];
      }
    }
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        cout<<a[i][j]+b[i][j]<<" ";
      }
      cout<<endl;
    }
    for(int i=0;i<rows;i++){
      for(int j=0;j<cols;j++){
        int s=0;
        for(int k=0;k<rows;k++){
           s+=a[i][k]*b[k][j];
        }
        cout<<s<<" ";
      }
      cout<<endl;
    }
    return 0;
  }
