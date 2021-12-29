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

        vector<int> arr(n);
        for (auto &x : arr)
            cin >> x;

        sort(arr.begin(), arr.end());

        for (int i = 0; i < n / 2; i++)
            cout << arr[i + 1] << " " << arr[0] << endl;
    }

    return 0;
}