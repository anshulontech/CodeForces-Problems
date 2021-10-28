// Solution:-

#include <bits/stdc++.h>
using namespace std;

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

        for (auto &x : arr)
            cin >> x;

        vector<vector<int>> res;
        res.push_back(arr);
        int z = 0;

        while (1)
        {
            unordered_map<int, int> map;
            for (auto x : res[z])
                map[x]++;

            vector<int> temp(n);

            for (int i = 0; i < n; i++)
                temp[i] = map[res[z][i]];

            res.push_back(temp);
            if (temp == res[z])
                break;
            else
                z++;
        }

        int q;
        cin >> q;

        while (q--)
        {
            int x, k;
            cin >> x >> k;

            int idx = min(k, z);

            cout << res[idx][x - 1] << endl;
        }
    }

    return 0;
}