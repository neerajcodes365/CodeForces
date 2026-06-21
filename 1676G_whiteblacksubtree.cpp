#include <bits/stdc++.h>
using namespace std;
int ans;
string s;

 int dfs(int cur,vector<vector<int>>& adj){
    int cnt=s[cur-1]=='W'?1:-1;

    int sum=0;
    for(auto ch:adj[cur]){
        sum+=dfs(ch,adj);
    }
    if(sum+cnt==0)ans++;
    return sum+cnt;
 }
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> adj(n + 1, vector<int>());
        for(int i=2;i<=n;i++){
            int in;
            cin>>in;
            adj[in].push_back(i);
        }
        cin>>s;
        ans=0;
        int f=dfs(1,adj);
        cout<<ans<<endl;
    }
    return 0;
}