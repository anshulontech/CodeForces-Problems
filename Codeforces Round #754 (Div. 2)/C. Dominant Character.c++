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
        string s;
        cin >> n >> s;

        int res = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != 'a')
                continue;

            int a = 0, b = 0, c = 0;

            int idx = i;

            while (idx < n)
            {
                if (s[idx] == 'a')
                    a++;
                else if (s[idx] == 'b')
                    b++;
                else if (s[idx] == 'c')
                    c++;

                if (a + 1 < b)
                    break;
                if (a + 1 < c)
                    break;

                if (a > b && a > c && (idx - i + 1) > 1)
                {
                    res = min(res, idx - i + 1);
                    break;
                }

                idx++;
            }
        }

        if (res != INT_MAX)
            cout << res << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}