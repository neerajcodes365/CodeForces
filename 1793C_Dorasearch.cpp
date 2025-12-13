#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        set<int>s;
        for(int i=0;i<n;i++) {
            cin>>arr[i];
            s.insert(arr[i]);
        }
        int i=0,j=n-1;
        while(i<j){
        bool flag=false;
           if(arr[i]==(*s.begin()) || arr[i]==(*s.rbegin())){
                s.erase(arr[i]);
                i++;
                flag=true;
            }  
             if(arr[j]==(*s.begin()) || arr[j]==(*s.rbegin())){
                s.erase(arr[j]);
                j--;
                flag=true;
            } 
            if(flag==false) break; 
        }
        cout<<"ans=";
        if(i<j) cout<<i+1<<" "<<j+1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}