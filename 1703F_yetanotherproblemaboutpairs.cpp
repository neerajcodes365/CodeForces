#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];

        vector<int>index;
        long long ans=0;
        for(int i=1;i<=n;i++){
            if(a[i]<i){
                ans+=lower_bound(index.begin(),index.end(),a[i])-index.begin();
            index.push_back(i);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}