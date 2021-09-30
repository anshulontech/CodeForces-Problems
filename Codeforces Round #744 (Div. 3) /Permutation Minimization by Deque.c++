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

        int val, minVal = INT_MAX;
        deque<int> dq;

        for (int i = 0; i < n; i++)
        {
            cin >> val;

            if (val < minVal)
            {
                dq.push_front(val);
                minVal = val;
            }
            else
                dq.push_back(val);
        }

        for (auto x : dq)
            cout << x << " ";
        cout << endl;
    }

    return 0;
}
