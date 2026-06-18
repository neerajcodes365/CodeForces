#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int>pvdiff(n,-1);
    int prv=-1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]) prv=i-1;
        pvdiff[i]=prv;
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(pvdiff[r-1]>=l-1){
            cout<<r<<" "<<pvdiff[r-1]+1<<endl;
        }else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    cout<<"\n";
}
    return 0;
}