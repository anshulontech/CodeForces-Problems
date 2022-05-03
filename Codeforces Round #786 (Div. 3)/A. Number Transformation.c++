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
        int x, y;
        cin >> x >> y;

        if ((x > y) || (y % x != 0))
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }

        cout << 1 << " " << y / x << endl;
    }
    return 0;
}