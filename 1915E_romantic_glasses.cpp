#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // unordered_set<long long> seen;
        map<long long,int>mp;

        mp[0]=1;

        long long pref = 0;
        bool ok = false;

        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)  
                pref += a[i];
            else
                pref -= a[i];

            if (mp.count(pref)) {
                ok = true;
                break;
            }

            mp[pref]=1;
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}