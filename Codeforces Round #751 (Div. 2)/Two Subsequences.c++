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

        char minChar = 'z';
        int idx = 0, n = s.size();

        for (int i = 0; i < n; i++)
            if (s[i] < minChar)
            {
                minChar = s[i];
                idx = i;
            }

        cout << minChar << " ";

        for (int i = 0; i < n; i++)
            if (i != idx)
                cout << s[i];

        cout << endl;
    }

    return 0;
}