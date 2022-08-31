#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int countVowel=0,countConsonant=0;
      for(int i=0; i<s.length(); i++){
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
          countVowel++;
        }
        else{
          countConsonant++;
        }
      }
      cout<<countVowel<<" "<<countConsonant<<endl;
    }
    
    return 0;
  }
