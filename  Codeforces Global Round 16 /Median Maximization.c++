// Solution:-

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int res;

        int left = n / 2 - (n % 2 == 0 ? 1 : 0);
        if (left > 0)
        {
            n -= left;
        }

        res = s / n;

        cout << res << endl;
    }

    return 0;
}