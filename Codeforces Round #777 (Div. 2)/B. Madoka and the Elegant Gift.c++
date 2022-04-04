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

        bool res = true;

        for (int i = 0; i < n && res; i++)
            for (int j = 0; j < m; j++)
            {
                int sum = 0;

                if (grid[i][j] == '1')
                    sum++;

                if (i + 1 < n && grid[i + 1][j] == '1')
                    sum++;

                if (j + 1 < m && grid[i][j + 1] == '1')
                    sum++;

                if (i + 1 < n && j + 1 < m && grid[i + 1][j + 1] == '1')
                    sum++;

                if (sum == 3)
                {
                    res = false;
                    break;
                }
            }

        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}