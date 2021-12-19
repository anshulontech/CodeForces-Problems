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
        string s, t;

        cin >> s >> t;

        sort(s.begin(), s.end());

        if (t == "abc" && s[0] == 'a')
        {
            int b = 0, c = 0;

            for (auto x : s)
                if (x == 'b')
                    b++;
                else if (x == 'c')
                    c++;

            for (auto &x : s)
                if (x == 'b' || x == 'c')
                {
                    if (c > 0)
                    {
                        x = 'c';
                        c--;
                    }
                    else if (b > 0)
                    {
                        x = 'b';
                        b--;
                    }
                }
        }

        cout << s << endl;
    }

    return 0;
}