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
        long long n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        long long res = min(abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]), abs(a[0] - b[n - 1]) + abs(a[n - 1] - b[0]));

        long long a1 = abs(a[0] - b[0]), b1 = abs(a[0] - b[0]), a2 = abs(a[n - 1] - b[n - 1]), b2 = abs(a[n - 1] - b[n - 1]);

        for (long long i = 1; i < n; i++)
            a1 = min(a1, abs(a[0] - b[i]));

        for (long long i = 1; i < n; i++)
            a2 = min(a2, abs(a[n - 1] - b[i]));

        for (long long i = 1; i < n; i++)
            b1 = min(b1, abs(b[0] - a[i]));

        for (long long i = 1; i < n; i++)
            b2 = min(b2, abs(b[n - 1] - a[i]));

        long long x1 = abs(a[0] - b[0]), x2 = abs(a[n - 1] - b[n - 1]);

        res = min(res, x1 + a2 + b2);
        res = min(res, x2 + a1 + b1);

        res = min(res, abs(a[0] - b[n - 1]) + b1 + a2);
        res = min(res, abs(b[0] - a[n - 1]) + a1 + b2);
        res = min(res, a1 + a2 + b1 + b2);

        cout << res << endl;
    }

    return 0;
}