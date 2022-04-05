// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> grid(n);

        for (auto &x : grid)
            cin >> x;

        if (grid[0][0] == '1')
        {
            cout << -1 << endl;
            continue;
        }

        vector<vector<int>> res;

        for (int i = n - 1; i >= 0; i--)
            for (int j = m - 1; j >= 0; j--)
            {
                if (grid[i][j] == '0')
                    continue;

                if (j != 0)
                    res.push_back({i + 1, j, i + 1, j + 1});
                else
                    res.push_back({i, j + 1, i + 1, j + 1});
            }

        cout << res.size() << endl;

        for (auto x : res)
            cout << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << endl;
    }

    return 0;
}
