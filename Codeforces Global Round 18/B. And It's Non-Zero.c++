// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<vector<long long>> helper(2e5 + 1, vector<long long>(31));

    for (int i = 1; i < 2e5 + 1; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            if (i & (1 << j))
                helper[i][j] = 1;
            helper[i][j] += helper[i - 1][j];
        }
    }

    int t = 1;
    cin >> t;

    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int res = r - l;
        int n = r - l + 1;

        for (int i = 0; i < 31; i++)
        {
            int curr = helper[r][i] - helper[l - 1][i];
            res = min(res, n - curr);
        }

        cout << res << endl;
    }

    return 0;
}