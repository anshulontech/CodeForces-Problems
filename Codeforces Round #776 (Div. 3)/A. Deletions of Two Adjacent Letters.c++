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

        string c;
        cin >> c;

        bool isValid = false;

        int n = s.size();

        for (int i = 0; i < n; i += 2)
            if (s[i] == c[0])
            {
                isValid = true;
                break;
            }

        if (isValid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}