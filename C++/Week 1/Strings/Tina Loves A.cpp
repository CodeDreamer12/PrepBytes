#include <iostream>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        int j;
        int count=0;
        int m=s.length()/2;
        if(m%2==0){
            j=m;
        }
        else{
            j=m+1;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                count=count+1;
            }
        }
        if(count>m){
            cout<<s.length()<<endl;
        }
        else{
            cout<<(count*2)-1<<endl;
        }
        t=t-1;
    }
    return 0;
}
