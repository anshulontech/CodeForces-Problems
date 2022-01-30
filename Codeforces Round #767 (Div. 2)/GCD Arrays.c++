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
        int l, r, k;

        cin >> l >> r >> k;

        if (l == r && l != 1)
        {
            cout << "YES" << endl;
            continue;
        }

        int count = (r - l) / 2;
        if (l % 2 == 1)
            count++;
        if (r % 2 == 1)
            count++;

        if (l % 2 == 1 && r % 2 == 1)
            count--;

        if (count > k)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}