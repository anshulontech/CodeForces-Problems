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
        string x, y;
        cin >> x >> y;

        vector<int> arr(26, 0);

        for (int i = 0; i < 26; i++)
            arr[x[i] - 'a'] = i + 1;

        int res = 0, pos = arr[y[0] - 'a'];

        for (auto p : y)
        {
            int currPos = arr[p - 'a'];
            res += abs(pos - currPos);
            pos = currPos;
        }

        cout << res << endl;
    }

    return 0;
}