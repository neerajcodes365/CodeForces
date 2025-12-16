#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        long long ans = 0;

        vector<bool> isRemoved(n + 1, false);

        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                //this loop is logn caz n,n/2,n/3,n/4,n/5 etc... iterations basically same as log base 2 n proof pole thane avum 
                if (s[j - 1] == '1')
                    break;

                if (isRemoved[j])
                    continue;
                else
                {
                    isRemoved[j] = true;
                    ans += i;
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
