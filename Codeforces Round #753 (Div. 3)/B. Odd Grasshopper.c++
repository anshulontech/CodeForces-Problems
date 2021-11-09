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
        long long x, n;

        cin >> x >> n;

        long long curr = (n / 4) * 4 + 1;

        while (curr <= n)
        {
            if (x % 2 == 0)
                x -= curr;
            else
                x += curr;

            curr++;
        }

        cout << x << endl;
    }

    return 0;
}
