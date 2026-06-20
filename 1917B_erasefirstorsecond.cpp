#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, int> mp;
        vector<int> v(n);

        int cnt = 0;

        for (int i = 0; i < n; i++) {
            mp[s[i]]++;

            if (mp[s[i]] == 1)
                cnt++;

            v[i] = cnt;
        }

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            ans += v[i];
        }

        cout << ans << '\n';
    }

    return 0;
}