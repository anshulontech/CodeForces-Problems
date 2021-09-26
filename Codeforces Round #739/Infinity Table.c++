// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int k;
        cin >> k;

        int s = sqrt(k);

        if (s * s == k)
        {
            cout << s << " 1" << endl;
            continue;
        }

        int num = s * s + 1;
        int x = 1, y = s + 1;

        while (num < k)
        {
            if (x < y)
                x++;
            else
                y--;

            num++;
        }

        cout << x << " " << y << endl;
    }

    return 0;
}