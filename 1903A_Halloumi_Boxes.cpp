#include<bits/stdc++.h>
using namespace std;
 
int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>help(n,0);
    int i=0;
    while(i<n){
    int it;
    cin>>it;
    help[i]=it;
    i++;
    }
    vector<int>sorted=help;
    sort(sorted.begin(),sorted.end());
    if(help==sorted || k>1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
return 0;
}