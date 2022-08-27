#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int x,y,z;
    cin>>x>>y>>z;
    if((x>y && x<z) || (x>z && x<y)){
      cout<<x<<endl;
    }
    else if((y>x && y<z) || (y>z && y<x)){
      cout<<y<<endl;
    }
    else{
      cout<<z<<endl;
    }
    
    return 0;
  }
