// Solution:-

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> arr(n * m);
        for (auto &x : arr)
            cin >> x;

        vector<int> temp;

        int res = 0;

        for (int i = 0; i < m; i++)
        {
            temp.push_back(arr[i]);
            sort(temp.begin(), temp.end());
            int idx = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();

            res += idx;
        }

        cout << res << endl;
    }

    return 0;
}