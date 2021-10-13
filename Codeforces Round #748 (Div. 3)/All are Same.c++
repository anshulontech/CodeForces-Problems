// Solution:-

#include <bits/stdc++.h>
using namespace std;

int helper(int x, int y)
{
    if (x == 0)
        return y;

    return helper(y % x, x);
}

int greatestCommonDivisor(vector<int> &arr)
{
    int res = arr[0], len = arr.size(); //

    for (int i = 1; i < len; i++)
    {
        res = helper(arr[i], res);

        if (res == 1)
            return 1;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        vector<int> arr(n);

        int minVal = INT_MAX;

        for (auto &x : arr)
        {
            cin >> x;
            minVal = min(minVal, x);
        }

        vector<int> val;
        unordered_set<int> set;

        for (auto x : arr)
        {
            if (x == minVal)
                continue;

            if (set.find(x - minVal) == set.end())
                val.push_back(x - minVal);

            set.insert(x - minVal);
        }

        // for (auto x : val)
        //     cout << x << " ";
        // cout << endl;
        if (val.size() == 0)
            cout << -1 << endl;
        else
            cout << greatestCommonDivisor(val) << endl;
    }

    return 0;
}