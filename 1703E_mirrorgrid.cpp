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

        vector<vector<char>> mat(n, vector<char>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];

        vector<vector<bool>> vis(n, vector<bool>(n, false));
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (vis[i][j]) continue;

                int x1 = i, y1 = j;
                int x2 = j, y2 = n - i - 1;
                int x3 = n - i - 1, y3 = n - j - 1;
                int x4 = n - j - 1, y4 = i;

                int c0 = 0, c1 = 0;

                (mat[x1][y1] == '0') ? c0++ : c1++;
                (mat[x2][y2] == '0') ? c0++ : c1++;
                (mat[x3][y3] == '0') ? c0++ : c1++;
                (mat[x4][y4] == '0') ? c0++ : c1++;

                ans += min(c0, c1);

                vis[x1][y1] = true;
                vis[x2][y2] = true;
                vis[x3][y3] = true;
                vis[x4][y4] = true;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
