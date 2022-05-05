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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int dog = 0, cat = 0;

        dog = a;
        cat = b;

        if (x > a)
        {
            int count = x - a;
            if (c < count)
            {
                cout << "NO" << endl;
                continue;
            }

            dog += count;
            c -= count;
        }

        if (y > b)
        {
            int count = y - b;
            if (c < count)
            {
                cout << "NO" << endl;
                continue;
            }
        }

        cout << "YES" << endl;
    }
    return 0;
}