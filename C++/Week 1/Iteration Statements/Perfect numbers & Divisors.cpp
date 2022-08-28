#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    //write your code here
    int t;
    cin>>t;
    while(t!=0){
        int n;
        cin>>n;
        int sum=0;
        for(int i=1; i<n; i++){
            if(n%i==0){
                sum=sum+i;
            }
        }
        if(sum==n){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
        t=t-1;
    }
    return 0;
  }
