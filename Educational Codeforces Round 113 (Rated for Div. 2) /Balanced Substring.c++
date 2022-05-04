// Solution:-

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = -1, y = -1;

        for (int i = 0; i < n - 1; i++)
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
            {
                x = i + 1, y = i + 2;
                break;
            }

        cout << x << " " << y << endl;
    }

    return 0;
}