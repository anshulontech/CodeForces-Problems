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

        vector<int> a(n);

        for (auto &x : a)
            cin >> x;

        string color;
        cin >> color;

        vector<int> blue, red;

        for (int i = 0; i < n; i++)
            if (color[i] == 'B')
                blue.push_back(a[i]);
            else
                red.push_back(a[i]);

        sort(blue.begin(), blue.end());
        sort(red.begin(), red.end());

        int b = blue.size() - 1, r = red.size() - 1;

        bool ans = true;

        for (int i = n; i > 0; i--)
        {
            if (r >= 0)
            {
                if (red[r] <= i)
                    r--;
                else
                {
                    ans = false;
                    break;
                }

                continue;
            }

            if (b >= 0)
            {
                if (blue[b] >= i)
                    b--;
                else
                {
                    ans = false;
                    break;
                }
            }
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}