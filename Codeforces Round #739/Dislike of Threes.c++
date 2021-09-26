// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    static vector<int> dp;
    if (dp.size() == 0)
        dp.push_back(0);

    while (t--)
    {
        int k;
        cin >> k;

        for (int i = dp[dp.size() - 1] + 1; dp.size() <= k; i++)
        {
            if (i % 3 != 0 && i % 10 != 3)
                dp.push_back(i);
        }

        cout << dp[k] << endl;
    }

    return 0;
}