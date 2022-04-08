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

        long long res = 1;

        for (int i = 0; i < n; i++)
            res *= 2;

        cout << res - 1 << endl;
    }

    return 0;
}