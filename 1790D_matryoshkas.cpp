#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        
        map<int,int>mp;//element,count
        for(int i:arr) mp[i]++;
        int ans=0;
        for(auto &[ele,count]: mp){
            ans+=max(mp[ele]-mp[ele-1],0);
        }
        cout<<ans<<endl;
    }

    return 0;
}