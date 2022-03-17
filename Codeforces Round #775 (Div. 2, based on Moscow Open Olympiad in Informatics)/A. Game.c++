// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (auto &x : arr)
            cin >> x;

        int res = 0, j = 1;

        bool isDoubleJump = false, isJumpFound = false;
        ;

        while (j < n)
        {
            if (arr[j] == 1)
            {
                j++;
                continue;
            }

            int count = 0;

            while (j < n && arr[j] == 0)
                j++, count++;

            res += count + 1;
            if (isJumpFound)
            {
                isDoubleJump = true;
                break;
            }
            else
                isJumpFound = true;
        }
        if (!isDoubleJump)
            cout << res << endl;
        else
        {
            int s = 0, e = n - 1;

            while (s < e && arr[s] == 1)
                s++;
            while (s < e && arr[e] == 1)
                e--;

            cout << e - s + 2 << endl;
        }
    }

    return 0;
}