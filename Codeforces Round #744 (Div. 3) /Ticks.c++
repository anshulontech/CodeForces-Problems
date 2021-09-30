// Solution:-

#include <bits/stdc++.h>
using namespace std;

bool isValidPoint(vector<vector<char>> &grid, int x, int y, int k)
{
    for (int i = 1; i <= k; i++)
        if (grid[x - i][y - i] == '.' || grid[x - i][y + i] == '.')
            return false;

    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<char>> grid(n, vector<char>(m));

        for (auto &x : grid)
            for (auto &y : x)
                cin >> y;

        vector<vector<char>> temp = grid;

        for (int i = n - 1; i >= k; i--)
            for (int j = m - k - 1; j >= k; j--)
            {
                if (grid[i][j] == '.' || !isValidPoint(grid, i, j, k))
                    continue;

                int p = 0;

                while (i - p >= 0 && j - p >= 0 && j + p < m && grid[i - p][j - p] == '*' && grid[i - p][j + p] == '*')
                {
                    temp[i - p][j - p] = '.';
                    temp[i - p][j + p] = '.';

                    p++;
                }
            }

        bool res = true;

        for (auto x : temp)
        {
            for (auto y : x)
                if (y == '*')
                {
                    res = false;
                }

            if (!res)
                break;
        }

        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
