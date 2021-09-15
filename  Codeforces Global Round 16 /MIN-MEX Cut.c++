// Solution:-

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int res = 0;
        int i = 0, n = s.size();

        while (i < n)
        {
            if (s[i] == '0')
            {
                while (i < n && s[i] == '0')
                    i++;

                res++;
            }
            else
            {
                while (i < n && s[i] == '1')
                    i++;
            }
        }

        if (res < 2)
            cout << res << endl;
        else
            cout << 2 << endl;
    }

    return 0;
}