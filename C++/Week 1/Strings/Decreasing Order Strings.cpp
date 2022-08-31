#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      for(int i=0; i<s.length()-1; i++){
        for(int j=i; j<s.length(); j++){
          if(s[i]<s[j]){
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
          }
        }
      }
      cout<<s<<endl;
    }
    
    return 0;
  }
