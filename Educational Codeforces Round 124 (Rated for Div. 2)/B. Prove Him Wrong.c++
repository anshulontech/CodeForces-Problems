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

        if (n > 19)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;

        int res = 1;

        for (int i = 0; i < n; i++)
        {
            cout << res << " ";
            res *= 3;
        }

        cout << endl;
    }

    return 0;
}