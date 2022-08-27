#include <bits/stdc++.h>
#include<iomanip>
  using namespace std;
  
  int main()
  {
    //write your code here
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
      float quantity,price;
    cin>>quantity>>price;
   float total;
      if(quantity>100){
        price=price-(price*0.20);
      }
      total=quantity*price;
      cout<<fixed<<setprecision(1);
      cout<<total<<endl;
    }
    
    
    return 0;
  }
