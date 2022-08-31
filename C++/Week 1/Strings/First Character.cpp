#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int flag=0;
     int freq[26]={0};
     for(int i=0; i<s.length(); i++){
       freq[s[i]-97]++;
     }
     for(int i=0; i<s.length(); i++){
       if(freq[s[i]-97]==1){
         flag=1;
         cout<<i<<endl;
         break;
       }
     }
     if(flag!=1){
       cout<<"-1"<<endl;
     }
    }
    
    return 0;
  }
