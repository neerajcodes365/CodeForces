#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>garr(n);
        for(int i=0;i<n;i++) cin>>garr[i];

        vector<vector<int>>index(k);

        for(int i=0;i<k;i++){
            index[i].push_back(0);
        }

        for(int i=0;i<n;i++){
            index[garr[i]-1].push_back(i+1);
        }

          for(int i=0;i<k;i++){
            index[i].push_back(n+1);
        }
        int mini=INT_MAX;
        
        for(int i=0;i<k;i++){
            priority_queue<int>help;
            for(int j=1;j<index[i].size();j++){
                int element=index[i][j] - index[i][j-1] -1;
                help.push(element);
            }
            int topi=help.top();
            help.pop();
            if(topi%2==0){
                help.push(topi/2);
                help.push((topi/2 )- 1);

            }else{
                help.push(topi/2);
                help.push(topi/2);
            }
            mini=min(mini,help.top());

        }

        cout<<mini<<endl;

    
    }


    return 0;
}