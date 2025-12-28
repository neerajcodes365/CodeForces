#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int ans=INT_MAX;
        for(char c='a';c<='z';c++){
            int i=0,j=n-1,tmp=0;
            bool ok=true;
            while(i<j){
                if(s[i]==s[j]){i++;j--;}
                else if(s[i]==c){tmp++;i++;}
                else if(s[j]==c){tmp++;j--;}
                else{ok=false;break;}
            }
            if(ok)ans=min(ans,tmp);
        }
        if(ans==INT_MAX)ans=-1;
        cout<<ans<<"\n";
    }
    return 0;
}
