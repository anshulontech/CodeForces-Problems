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
        int n;
        cin >> n;

        for (int i = 2; i <= n; i++)
        {
            if (__gcd(n - 1 - i, i) == 1)
            {
                cout << i << " " << n - 1 - i << " 1" << endl;
                break;
            }
        }
    }

    return 0;
}