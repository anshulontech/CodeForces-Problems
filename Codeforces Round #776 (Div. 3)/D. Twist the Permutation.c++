// Solution:-

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr, int e)
{
    int s0 = arr[0];

    for (int i = 0; i < e; i++)
        arr[i] = arr[i + 1];
    arr[e] = s0;
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
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> res;

        for (int i = n; i > 0; i--)
        {
            int idx = 0;

            while (idx < n && arr[idx] != i)
                idx++;

            if (idx == (i - 1))
            {
                res.push_back(0);
                continue;
            }

            for (int j = 0; j <= idx; j++)
            {
                rotate(arr, i - 1);
            }

            res.push_back(idx + 1);
        }

        for (int i = res.size() - 1; i >= 0; i--)
            cout << res[i] << " ";

        cout << endl;
    }

    return 0;
}