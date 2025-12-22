#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        vector<long long> prefix(n);
        prefix[0] = v[0];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + v[i];

        map<long long, int> mp;
        mp[0] = -1;

        int len = -1;

        for (int i = 0; i < n; i++)
        {
            long long curr = prefix[i];

            if (mp.count(curr - s))
                len = max(len, i - mp[curr - s]);

            if (!mp.count(curr))
                mp[curr] = i;
        }

        if (len == -1)
            cout << "-1\n";
        else
            cout << (n - len) << "\n";
    }

    return 0;
}
