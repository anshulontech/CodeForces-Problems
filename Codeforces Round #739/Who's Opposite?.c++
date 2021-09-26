// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    static vector<int> dp;
    if (dp.size() == 0)
        dp.push_back(0);

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int d = abs(a - b);

        if (a > d * 2 || b > d * 2 || c > d * 2)
        {
            cout << -1 << endl;
            continue;
        }

        int first = c - d, second = c + d;

        if (first > 0 && first != a && first != b && first <= d * 2)
        {
            cout << first << endl;
            continue;
        }

        if (second <= d * 2 && second != a && second != b && second > 0)
        {
            cout << second << endl;
            continue;
        }

        cout << -1 << endl;
    }

    return 0;
}