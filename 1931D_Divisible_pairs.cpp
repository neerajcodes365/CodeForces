#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x,y;
        cin>>n>>x>>y;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<pair<int,int>,long long>cnt;
        long long ans=0;

        for(int i=0;i<n;i++){
            long long rx= a[i]%x;
            long long needx = (x - rx) % x;
            long long ry=a[i]%y;

             ans += cnt[{needx, ry}];
            cnt[{rx,ry}]++;
        }
        cout<<ans<<"\n";
    }

return 0;
}