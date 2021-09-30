// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        priority_queue<pair<int, int>> pq;

        for (int i = 1; i <= n; i++)
        {
            int val;
            cin >> val;
            if (val > 0)
                pq.push({val, i});
        }

        vector<pair<int, int>> res;

        while (pq.size() > 1)
        {
            auto first = pq.top();
            pq.pop();
            auto second = pq.top();
            pq.pop();

            res.push_back({first.second, second.second});
            first.first--;
            second.first--;

            if (first.first > 0)
                pq.push(first);
            if (second.first > 0)
                pq.push(second);
        }

        cout << res.size() << endl;

        for (auto x : res)
            cout << x.first << " " << x.second << endl;
    }

    return 0;
}