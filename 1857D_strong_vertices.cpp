#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), ans;
        for (int i = 0; i < n; i++) cin >> a[i];

        int mx = INT_MIN;

        for (int i = 0; i < n; i++) {
            int b;
            cin >> b;
            a[i] -= b;
            mx = max(mx, a[i]);
        }

        for (int i = 0; i < n; i++) {
            if (a[i] == mx) ans.push_back(i + 1);
        }

        cout << ans.size() << '\n';

        for (auto x : ans) {
            cout << x << " ";
        }

        cout << '\n';
    }
}