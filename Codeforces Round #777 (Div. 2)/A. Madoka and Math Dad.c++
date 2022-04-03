// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string res = "";

        bool isLast2 = false;

        if (n % 3 == 1)
            isLast2 = true;

        while (n > 0)
        {
            if (!isLast2 && n > 1)
            {
                res += '2';
                n -= 2;
            }
            else
            {
                res += '1';
                n -= 1;
            }

            isLast2 = !isLast2;
        }

        cout << res << endl;
    }

    return 0;
}