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

        vector<int> arr(k);

        for (auto &x : arr)
        {
            cin >> x;
            x = n - x;
        }

        sort(arr.begin(), arr.end());

        long long sum = 0, count = 0;

        for (int i = 0; i < k; i++)
        {
            sum += arr[i];
            if (sum >= n)
                break;

            count++;
        }

        cout << count << endl;
    }

    return 0;
}