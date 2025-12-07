#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int m=n*(n-1)/2;
        vector<int>arr(m);
        for(int i=0;i<m;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        int i=0;
int index=i;
int total=n-1;
        while(i<n-1){
            cout<<arr[index]<<" ";
            index+=(total);
            i++;
            total--;
        }
        cout << 1000000000 << "\n"; 
    }

    return 0;
}