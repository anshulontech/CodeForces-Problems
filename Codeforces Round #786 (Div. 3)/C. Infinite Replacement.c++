// Solution:-

#include <bits/stdc++.h>
using namespace std;

long long helper(long long n)
{
    long long res = 1;

    for (long long i = 0; i < n; i++)
        res = res * ((long long)(2));

    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;

    while (t--)
    {
        string s, x;
        cin >> s >> x;

        if (s.size() == 0)
            cout << 0 << endl;

        int count = 0;

        for (auto c : x)
            if (c == 'a')
                count++;

        if (count != 0)
            if (x.size() == 1)
                cout << 1 << endl;
            else
                cout << -1 << endl;
        else
            cout << helper(s.size()) << endl;
        ;
    }
    return 0;
}