// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &x : a)
            cin >> x;

        sort(a.begin(), a.end());

        int res = a[0], remove = 0;

        for (int i = 0; i < n - 1; i++)
        {
            remove += a[i] - remove;
            res = max(res, a[i + 1] - remove);
        }

        cout << res << endl;
    }

    return 0;
}