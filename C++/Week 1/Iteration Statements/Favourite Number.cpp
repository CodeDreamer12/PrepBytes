#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t!=0){
      int n,count=0;
      cin>>n;
      while(n!=0){
        int rem=n%10;
        if(rem==5){
          count++;
        }
        n=n/10;
      }
      cout<<count<<endl;
      t=t-1;
    }
    return 0;
  }
