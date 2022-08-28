#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
     int count=0;
      while(count<3){
        n/=10;
        count++;
      }
      cout<<n<<endl;
    }
    return 0;
  }
