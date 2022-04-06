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
        string s;
        cin >> s;

        bool isPossible = true;

        for (int i = 0; i < 6; i++)
            if (s[i] == 'R' || s[i] == 'G' || s[i] == 'B')
            {
                bool temp = false;
                for (int j = 0; j < i; j++)
                {
                    if (s[j] == (s[i] - 'A' + 'a'))
                    {
                        temp = true;
                        break;
                    }
                }

                if (!temp)
                {
                    isPossible = false;
                    break;
                }
            }

        if (isPossible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}