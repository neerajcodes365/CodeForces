#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    vector<int>a(1e6+1,0);
    for(long long int k=2;k<=10000;k++){
       long long int now=k*k*k;//k^3  k^n -1/k-1  ,n = levels 
       long long int ans=(now-1)/(k-1);
        while(ans<=1e6){
        a[ans]=1;
        now*=k;
        ans=(now-1)/(k-1);
        }
    }

    while(t--){
        int n;
        cin>>n;
        if(a[n])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}