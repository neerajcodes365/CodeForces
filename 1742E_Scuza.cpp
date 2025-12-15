#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<long long> mx(n), pref(n);

        mx[0] = a[0];
        pref[0] = a[0];

        for (int i = 1; i < n; i++) {
            mx[i] = max(mx[i - 1], a[i]);
            pref[i] = pref[i - 1] + a[i];
        }

        while (q--) {
            long long k;
            cin >> k;

            // first index where mx[i] > k
            int idx = upper_bound(mx.begin(), mx.end(), k) - mx.begin() - 1;

            if (idx < 0)
                cout << 0 << " ";
            else
                cout << pref[idx] << " ";
        }
        cout << '\n';
    }

    return 0;
}
