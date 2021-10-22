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

        int temp = arr[0];

        for (auto x : arr)
            temp = temp & x;

        int res = 0;

        for (auto x : arr)
            res = max(res, x & temp);

        cout << res << endl;
    }

    return 0;
}