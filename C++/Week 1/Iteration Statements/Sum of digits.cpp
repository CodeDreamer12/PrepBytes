#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n,rem;
    cin>>n;
    int sum=0;
    while(n!=0){
       rem=n%10;
       sum=sum+rem;
       n=n/10;
    }
    cout<<sum;
    
    return 0;
  }
