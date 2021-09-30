// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (auto &x : arr)
            cin >> x;

        vector<int> temp = arr;

        sort(temp.begin(), temp.end());

        vector<vector<int>> res;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == temp[i])
                continue;

            int j = i - 1, val = arr[i];
            arr[i] = temp[i];

            while (j >= 0 && arr[j] != temp[i])
            {
                int tempVal = arr[j];
                arr[j] = val;
                val = tempVal;
                j--;
            }

            arr[j] = val;

            res.push_back({j + 1, i + 1, 1});
        }

        cout << res.size() << endl;

        for (auto x : res)
            cout << x[0] << " " << x[1] << " " << x[2] << endl;
    }

    return 0;
}