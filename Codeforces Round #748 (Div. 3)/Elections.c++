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
        long long a, b, c;

        cin >> a >> b >> c;

        int maxV = max(a, max(b, c));

        int count = 0;

        if (maxV == a)
            count++;
        if (maxV == b)
            count++;
        if (maxV == c)
            count++;

        if (maxV == a)
            if (count == 1)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        else
            cout << maxV + 1 - a << " ";

        if (maxV == b)
            if (count == 1)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        else
            cout << maxV + 1 - b << " ";

        if (maxV == c)
            if (count == 1)
                cout << 0 << " ";
            else
                cout << 1 << " ";
        else
            cout << maxV + 1 - c << " ";

        cout << endl;
    }

    return 0;
}