#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int count=0;
    for(int i=1; i<=n; i++){
      int t,c;
      cin>>t>>c;
      if(c-t>=2){
        count=count+1;
      }
    }
    cout<<count;
    
    return 0;
  }
