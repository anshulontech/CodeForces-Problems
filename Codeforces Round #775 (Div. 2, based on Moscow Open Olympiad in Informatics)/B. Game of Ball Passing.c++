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

        long long sum = 0, maxVal = 0;

        vector<long long> arr(n);

        for (auto &x : arr)
        {
            cin >> x;
            sum += x;
            maxVal = max(maxVal, x);
        }

        if (maxVal == 0)
        {
            cout << 0 << endl;
            continue;
        }

        sum -= maxVal;

        long long res = maxVal - sum;

        if (res <= 0)
            res = 1;

        cout << res << endl;
    }

    return 0;
}