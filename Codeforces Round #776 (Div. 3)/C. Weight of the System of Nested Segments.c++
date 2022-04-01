// Solution:-

#include <bits/stdc++.h>
using namespace std;

const static bool cmp(const vector<int> &a, const vector<int> &b)
{
    return a[1] < b[1];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(m, vector<int>(3, 0));
        int i = 1;

        for (auto &x : arr)
        {
            cin >> x[1] >> x[0];
            x[2] = i++;
        }

        sort(arr.begin(), arr.end());

        sort(arr.begin(), arr.begin() + 2 * n, cmp);

        long long sum = 0;

        for (int i = 0; i < 2 * n; i++)
            sum += arr[i][0];

        cout << sum << endl;

        for (int i = 0, j = 2 * n - 1; i < j; i++, j--)
            cout << arr[i][2] << " " << arr[j][2] << endl;

        cout << endl;
    }

    return 0;
}