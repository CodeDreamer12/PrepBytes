#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     string letter[n];
     for(int i=0; i<n; i++){
       cin>>letter[i];
     }
     int count=0;
     for(int i=0; i<n; i++){
       if(letter[i]=="x"){
         count++;
       }
     }
     cout<<count<<endl;
   }
    
    return 0;
  }
