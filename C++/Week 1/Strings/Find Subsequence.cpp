#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int test;
    cin>>test;
    
    while(test!=0){
      
      string s,t;
      cin>>s>>t;
      bool flag;
      int k=0;
      for(int i=0;i<t.length();i++){
         flag=false;
        for(int j=k;j<s.length();j++){
          if(s[j]==t[i]){
            
            flag=true;
            
            break;
          }
          k++;
        }
        if(flag==false)
         break;
      }
      if(flag==true){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
      test=test-1;
    }
    
    return 0;
  }
