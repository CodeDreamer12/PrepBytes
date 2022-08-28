#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    int sum=n*(n+1)/2;
    if(sum%2==0){
      cout<<"0";
    }
    else{
      cout<<"1";
    }
    
    return 0;
  }
