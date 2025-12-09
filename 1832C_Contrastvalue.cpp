#include<bits/stdc++.h>

using namespace std ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        vector<int>b;
        if (a.size() == 1) {
			cout << "1\n";
			continue;
		}
        b.push_back(a[0]);
        b.push_back(a[1]);

        for(int i=2;i<n;i++){
            int ii=b.size();
            int x= b[ii-2]- b[ii-1] ;
            int y=b[ii-1] - a[i];

            if(x>0){
                if(y>0) b[ii-1]=a[i];
                else if(y<0) b.push_back(a[i]);
            }
            else{
                if(y<0) b[ii-1]=a[i];
                else if(y>0) b.push_back(a[i]);
            }

        }

        int ans=b.size();
        if(b[0]==b[1]) ans--;
        cout<<ans<<endl;

    // }

    return 0;
}