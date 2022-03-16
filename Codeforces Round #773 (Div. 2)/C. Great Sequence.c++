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
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        map<long long, long long> map;

        for (auto &x : a)
        {
            cin >> x;
            map[x]++;
        }

        sort(a.begin(), a.end());

        long long res = 0;

        for (auto x : a)
        {
            if (map[x] == 0)
                continue;

            long long num = x * k;

            if (map[num] != 0)
            {
                map[num]--;
                map[x]--;
            }
            else
            {
                res++;
                map[x]--;
            }
        }

        cout << res << endl;
    }

    return 0;
}