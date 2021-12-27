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

        long long sum = 0, val;

        for (int i = 0; i < n; i++)
        {
            cin >> val;

            sum += val;
        }

        if (sum % n == 0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }

    return 0;
}