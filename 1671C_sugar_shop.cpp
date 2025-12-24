#include<bits/stdc++.h>

using namespace std;
bool pf(long long val, int ind, int x, int mid)
{
	if (val + (1LL * (ind + 1) * (mid - 1)) <= x)
		return true;
	return false;
}
int bs(long long val, int ind, int x)
{
	int low = 1, high = 1e9 + 5;
	int ans = 0;

	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (pf(val, ind, x, mid))
		{
			ans = mid;

			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
    return ans;
}
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        vector<long long >prefix(n);
        for(int i=0;i<n;i++){
            if(i==0) prefix[i]=arr[i];
            else prefix[i]=prefix[i-1]+arr[i];
        }
        long long ans=0;

        for(int i=0;i<n;i++){
            ans+=bs(prefix[i],i,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}