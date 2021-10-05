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
        int n, h;
        cin >> n >> h;

        vector<int> arr(n);

        for (auto &x : arr)
            cin >> x;

        int k = 0;

        sort(arr.begin(), arr.end());

        int sum = arr[n - 1] + arr[n - 2];

        k = (h / sum);

        h %= sum;
        k = k * 2;

        if (h > 0)
        {
            k++;
            h -= arr[n - 1];
        }

        if (h > 0)
        {
            k++;
            h -= arr[n - 2];
        }

        cout << k << endl;
    }

    return 0;
}
