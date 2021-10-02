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
        long long n, m, k;
        cin >> n >> m >> k;

        k -= 2;

        long long max;

        if (n % 2 == 0)
            max = (n / 2) * (n - 1);
        else
            max = ((n - 1) / 2) * n;

        if (m < n - 1)
            cout << "NO" << endl;
        else if (m > max)
            cout << "NO" << endl;
        else if (k <= -1)
            cout << "NO" << endl;
        else if (k == 0)
        {
            if (n == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (k == 1)
        {
            if (m == max)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }

    return 0;
}
