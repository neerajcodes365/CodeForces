#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    // cout<<t<<endl;

    while(t--){
            int n;
            cin>>n;
            vector<long long>arr(n);
            // while(n--)
            for(int i=0;i<n;i++) cin>>arr[i];

        long long ans=0;

        for(int i=0;i<60;i++){
            // long long num=pow(2,i);
            long long num=1LL<<i;
            set<long long>help;
            for(auto it:arr){
                help.insert(it%num);
            }
            if(help.size()==2) {
                cout<<num<<endl;
                break;
            }
        }
        
    }

return 0;
}