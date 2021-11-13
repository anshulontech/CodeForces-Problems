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
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool isSorted = true;

        char prev = '0';
        for (auto x : s)
        {
            if (x < prev)
            {
                isSorted = false;
                break;
            }

            prev = x;
        }

        if (isSorted)
        {
            cout << 0 << endl;
            continue;
        }

        vector<int> res;

        int i = 0, j = n - 1;

        while (i < j)
        {
            while (i < j && s[i] == '0')
                i++;

            while (i < j && s[j] == '1')
                j--;

            if (i != j)
            {
                res.push_back(i + 1);
                res.push_back(j + 1);

                i++, j--;
            }
        }

        cout << 1 << endl;
        cout << res.size() << " ";

        sort(res.begin(), res.end());

        for (auto x : res)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}