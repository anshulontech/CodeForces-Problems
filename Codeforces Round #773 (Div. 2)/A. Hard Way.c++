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
        long long x1, x2, x3, y1, y2, y3;

        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        if (y1 == y2 || y2 == y3 || y3 == y1)
        {
            if (y1 == y2)
                if (y3 > y1)
                    cout << 0.00 << endl;
                else
                    cout << abs(x1 - x2) << endl;
            else if (y2 == y3)
                if (y1 > y3)
                    cout << 0.00 << endl;
                else
                    cout << abs(x2 - x3) << endl;
            else if (y2 > y3)
                cout << 0.00 << endl;
            else
                cout << abs(x1 - x3) << endl;
        }
        else
        {
            cout << 0.00 << endl;
        }
    }

    return 0;
}