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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (k >= 25)
        {
            for (int i = 0; i < n; i++)
                cout << "a";
            cout << endl;

            continue;
        }

        int idx = 0;

        while (idx < n && s[idx] == 'a')
            idx++;

        unordered_set<char> changed;

        for (int i = idx; i < n; i++)
        {
            while ((k > 0 || changed.find(s[i]) != changed.end()) && s[i] > 'a')
            {
                if (changed.find(s[i]) != changed.end())
                    s[i]--;
                else
                {
                    changed.insert(s[i]);
                    s[i]--;
                    k--;
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}