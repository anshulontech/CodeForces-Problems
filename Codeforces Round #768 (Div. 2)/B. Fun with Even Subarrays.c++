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

        vector<int> a(n);

        for (auto &x : a)
            cin >> x;

        int idx = n - 2, res = 0, count = 1, val = a[n - 1];

        while (idx >= 0)
        {
            while (idx >= 0 && a[idx] == val)
                idx--, count++;

            if (idx < 0)
                break;

            count *= 2;
            idx = n - 1 - count;
            res++;
        }

        cout << res << endl;
    }

    return 0;
}