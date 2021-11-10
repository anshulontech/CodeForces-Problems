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
        int n, m;
        cin >> n >> m;

        int l = 0, r = 0, u = 0, d = 0;
        string s;
        cin >> s;
        int x = 0, y = 0;

        int p = 1, q = 1;

        for (auto c : s)
        {
            if (c == 'L')
            {
                x--;
                l = min(l, x);
                if (abs(l) + abs(r) >= m)
                {
                    break;
                }

                p = abs(l) + 1;
            }
            else if (c == 'R')
            {
                x++;
                r = max(r, x);
                if (abs(l) + abs(r) >= m)
                {
                    break;
                }

                p = m - r;
            }
            else if (c == 'U')
            {
                y--;
                u = min(u, y);
                if (abs(u) + abs(d) >= n)
                {
                    break;
                }
                q = abs(u) + 1;
            }
            else
            {
                y++;
                d = max(d, y);
                if (abs(u) + abs(d) >= n)
                {
                    break;
                }
                q = n - d;
            }
        }

        cout << q << " " << p << endl;
    }

    return 0;
}