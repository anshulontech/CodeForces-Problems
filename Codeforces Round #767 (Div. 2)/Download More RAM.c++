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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> arr(n);

        for (auto &x : arr)
        {
            cin >> x.first;
        }

        for (auto &x : arr)
        {
            cin >> x.second;
        }

        sort(arr.begin(), arr.end());

        for (auto x : arr)
            if (x.first > k)
                break;
            else
                k += x.second;

        cout << k << endl;
    }

    return 0;
}