#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    char ch;
    cin>>ch;
    for(int i=1; i<=5; i++){
      for(int j=1; j<=i; j++){
        cout<<j;
      }
      for(int j=1; j<=2*5-2*i; j++){
        cout<<" ";
      }
      for(int j=i; j>=1; j--){
        cout<<j;
      }
      cout<<endl;
    }
    
    return 0;
  }
