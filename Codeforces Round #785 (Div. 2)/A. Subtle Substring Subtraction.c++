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
        string s;
        cin >> s;

        int alice = 0, bob = 0, n = s.size();

        int sum = 0;

        for (auto x : s)
            sum += x - 'a' + 1;

        if (n % 2 == 0)
        {
            cout << "Alice " << sum << endl;
        }
        else
        {
            bob = min(s[0], s[n - 1]) - 'a' + 1;
            alice = sum - bob;

            if (alice >= bob)
                cout << "Alice " << alice - bob << endl;
            else
                cout << "Bob " << bob - alice << endl;
        }
    }
    return 0;
}