// Solution:-

#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<long long, long long> &a, pair<long long, long long> &b)
{
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t = 1;
    // cin >> t;

    while (t--)
    {
        long long n, m, val;
        cin >> n >> m;

        unordered_map<long long, vector<pair<long long, long long>>> map;

        for (long long i = 1; i <= n; i++)
            for (long long j = 1; j <= m; j++)
            {
                cin >> val;

                map[val].push_back({i, j});
            }

        long long res = 0;

        for (auto x : map)
        {
            auto &arr = x.second;

            sort(arr.begin(), arr.end());

            long long sum = arr[0].first;

            for (long long i = 1; i < arr.size(); i++)
            {
                res += (arr[i].first * i - sum);
                sum += arr[i].first;
            }

            sort(arr.begin(), arr.end(), cmp);

            sum = arr[0].second;

            for (long long i = 1; i < arr.size(); i++)
            {
                res += (arr[i].second * i - sum);
                sum += arr[i].second;
            }
        }

        cout << res << endl;
    }

    return 0;
}