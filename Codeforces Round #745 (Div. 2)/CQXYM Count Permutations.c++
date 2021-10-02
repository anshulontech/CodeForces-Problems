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
        long long n;
        cin >> n;

        long long fact = 1, mod = 1e9 + 7;

        for (int i = 2 * n; i > 2; i--)
        {
            fact *= i;
            fact %= mod;
        }

        cout << fact << endl;
    }

    return 0;
}