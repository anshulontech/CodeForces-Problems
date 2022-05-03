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
        string s;
        cin >> s;

        int res = 0;

        res += (s[0] - 'a') * 25 + (s[1] - 'a') + 1;

        if (s[0] < s[1])
            res--;

        cout << res << endl;
    }
    return 0;
}