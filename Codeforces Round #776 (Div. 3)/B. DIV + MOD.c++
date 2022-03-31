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
        int l, r, a;
        cin >> l >> r >> a;

        int res = r / a + (r % a);

        if ((r % a) != r - 1)
        {
            int val = r - 1 - (r % a);

            if (val >= l)
                res = max(res, val / a + (val % a));
        }

        cout << res << endl;
    }

    return 0;
}