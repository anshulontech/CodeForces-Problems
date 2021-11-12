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
        int a, b, c;
        cin >> a >> b >> c;

        int first = a + c, second = 2 * b;

        int am = abs(first - second);

        if (am % 3 == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}