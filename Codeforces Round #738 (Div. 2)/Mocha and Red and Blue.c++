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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int idx = 0;

        while (idx < n && s[idx] == '?')
            idx++;

        if (idx == n)
        {
            for (int i = 0; i < n; i++)
                if (i % 2 == 0)
                    s[i] = 'B';
                else
                    s[i] = 'R';

            cout << s << endl;

            continue;
        }

        bool isB;
        if (s[idx] == 'B')
            isB = true;
        else
            isB = false;

        for (int i = idx - 1; i >= 0; i--)
        {
            if (isB)
                s[i] = 'R';
            else
                s[i] = 'B';

            isB = !isB;
        }

        if (s[idx] == 'B')
            isB = true;
        else
            isB = false;

        for (int i = idx + 1; i < n; i++)
            if (s[i] == '?')
            {
                if (isB)
                    s[i] = 'R';
                else
                    s[i] = 'B';

                isB = !isB;
            }
            else
            {
                if (s[i] == 'B')
                    isB = true;
                else
                    isB = false;
            }

        cout << s << endl;
    }

    return 0;
}