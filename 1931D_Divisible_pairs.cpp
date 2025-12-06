#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    while(t--){
        int n,x,y;
        cin>>n;
        vector<int>arr(n);
        cin>>x>>y;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        map<int,int>st;//mod value,count 

        int ans=0;

        for(int i=0;i<n;i++){
            // if()
            int crnt=arr[i];
            int find=x-(crnt%x);
            if(st.count(find)){
                ans+=st[find];
            }
            // if(st.count(crnt)) st[crnt]++;
            // else st[crnt]++;
            st[crnt]++;
        }
        return ans;

    }
    return 0;
}