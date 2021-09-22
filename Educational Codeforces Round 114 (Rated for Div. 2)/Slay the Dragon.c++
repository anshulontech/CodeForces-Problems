// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<long long> hero(n);

    for (auto &x : hero)
        cin >> x;
    sort(hero.begin(), hero.end());

    long long def = accumulate(hero.begin(), hero.end(), 0LL);

    int m;
    cin >> m;

    while (m--)
    {
        long long x, y;
        cin >> x >> y;

        long long coins = 0;

        int idx = lower_bound(hero.begin(), hero.end(), x) - hero.begin();

        if (idx != n && hero[idx] == x)
        {
            if ((def - x) < y)
                coins = y - (def - x);
            cout << coins << endl;
            continue;
        }

        if (idx == n)
        {
            coins = x - hero[n - 1];
            if (def - hero[n - 1] < y)
                coins += y - (def - hero[n - 1]);

            cout << coins << endl;
            continue;
        }

        if (idx == 0)
        {
            if (def - hero[idx] < y)
                coins += y - (def - hero[idx]);

            cout << coins << endl;
            continue;
        }

        long long tempCoins1 = 0, tempCoins2 = 0;

        if (hero[idx] < x)
            tempCoins1 += x - (hero[idx]);
        if (def - hero[idx] < y)
            tempCoins1 += y - (def - hero[idx]);

        idx--;

        if (hero[idx] < x)
            tempCoins2 += x - (hero[idx]);
        if (def - hero[idx] < y)
            tempCoins2 += y - (def - hero[idx]);

        coins = min(tempCoins1, tempCoins2);

        cout << coins << endl;
    }

    return 0;
}