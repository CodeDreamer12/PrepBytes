#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int x,y;
    cin>>x>>y;
    if(x<y){
      cout<<x<<" is smaller than "<<y<<endl;
    }
    else if(x>y){
      cout<<x<<" is greater than "<<y<<endl;
    }
    else{
      cout<<x<<" is equal to "<<y<<endl;
    }
    
    return 0;
  }
