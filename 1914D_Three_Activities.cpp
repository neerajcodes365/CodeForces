#include <bits/stdc++.h>
using namespace std;

vector<int> helpi(vector<int>&arr){
    // set<int,int>st;
    vector<pair<int,int>>ans;
    // int i=0
    for(int i=0;i<arr.size();i++){
        ans.push_back({arr[i],i});
    }
    sort(ans.begin(),ans.end(),greater<pair<int,int>>());
    vector<int>ret(3);
    for(int i=0;i<3;i++){
        ret[i]=ans[i].second;
    }
    return ret;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n,0),b(n,0),c(n,0);
        // for(int i =0;i<3;i++){
        //     for(int j=0;j<n;j++){
        //             int num;  
        //         if(i==0){
        //             cin>>num;
        //             a[j]=num;
        //         }
        //         if(i==1){
        //             cin>>num;
        //             b[j]=num;
        //         }if(i==2){
        //             cin>>num;
        //             c[j]=num;
        //         }
        //     }
        // }

         for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        for(int j=0;j<n;j++){
            cin>>c[j];
        }

        vector<int>amax(3),bmax(3),cmax(3);
        amax=helpi(a);
        bmax=helpi(b);
        cmax=helpi(c);

  
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(amax[i]==bmax[j]||amax[i]==cmax[k]||bmax[j]==cmax[k]) continue;
                    ans=max(ans,a[amax[i]] +b[bmax[j]]+c[cmax[k]]);
                }
            }
        }
        // cout<<"ans is = " <<ans<<endl;
        cout<<ans<<endl;
    }

    return 0;
}
