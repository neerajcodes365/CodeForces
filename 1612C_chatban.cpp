#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(ll x) {
    return x * (x + 1) / 2;
}

int main() {

    int t;
    cin >> t;

    while (t--) {
        ll k, x;
        cin >> k >> x;

        ll lo = 1, hi = 2 * k - 1;
        ll ans = hi;

        while (lo <= hi) {
            ll mid = lo + (hi - lo) / 2;

            ll cnt;
            if (mid < k)
                cnt = sum(mid);
            else
                cnt = sum(k) + sum(k - 1) - sum(2 * k - 1 - mid);

            if (cnt >= x) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}