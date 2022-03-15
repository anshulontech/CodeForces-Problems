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
        int n, x;
        cin >> n;

        unordered_set<int> set;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            set.insert(x);
        }

        int len = set.size();

        for (int i = 1; i <= len; i++)
            cout << len << " ";

        for (int i = len + 1; i <= n; i++)
            cout << i << " ";

        cout << endl;
    }

    return 0;
}