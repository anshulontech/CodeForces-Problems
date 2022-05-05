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
        cin >> s;

        n = s.size();

        int idx1 = n - 1;

        while (idx1 >= 0 && s[idx1] != '1')
            idx1--;

        int idx0 = idx1 + 1;

        while (idx0 < n && s[idx0] != '0')
            idx0++;

        if (idx1 != -1 && idx0 != n)
        {
            cout << idx0 - idx1 + 1 << endl;
        }
        else
        {
            if (idx1 == -1 && idx0 == n)
                cout << n << endl;
            else
                cout << idx0 - idx1 << endl;
        }
    }
    return 0;
}