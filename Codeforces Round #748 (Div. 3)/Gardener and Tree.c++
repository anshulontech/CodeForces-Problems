// Solution:-

#include <bits/stdc++.h>
using namespace std;

int helper(int x, int y)
{
    if (x == 0)
        return y;

    return helper(y % x, x);
}

int greatestCommonDivisor(vector<int> &arr)
{
    int res = arr[0], len = arr.size(); //

    for (int i = 1; i < len; i++)
    {
        res = helper(arr[i], res);

        if (res == 1)
            return 1;
    }

    return res;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;

        cin >> n >> k;

        unordered_map<int, pair<int, vector<int>>> map;

        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;

            map[x].first++;
            map[x].second.push_back(y);

            map[y].first++;
            map[y].second.push_back(x);
        }

        unordered_set<int> temp1, temp2;
        bool f = true;

        for (auto x : map)
            if (x.second.first == 1)
                temp1.insert(x.first);

        while (k-- && !map.empty())
        {
            if (f)
            {
                // cout << k << endl;
                for (auto x : temp1)
                {
                    // cout << "x= " << x << endl;
                    if (map.find(x) == map.end())
                        continue;
                    for (auto y : map[x].second)
                    {
                        // cout << "y= " << y << endl;
                        if (map.find(y) != map.end())
                        {
                            // cout << "R" << endl;
                            map[y].first--;
                            if (map[y].first == 1)
                                temp2.insert(y);
                        }
                    }

                    map.erase(x);
                }

                temp1.clear();
                // cout << "temp2= ";
                // for (auto x : temp2)
                //     cout << x << " ";
                // cout << endl;
            }
            else
            {
                // cout << k << endl;
                for (auto x : temp2)
                {
                    // cout << "x= " << x << endl;
                    if (map.find(x) == map.end())
                        continue;

                    for (auto y : map[x].second)
                    {
                        // cout << "y= " << y << endl;
                        if (map.find(y) != map.end())
                        {
                            // cout << "R" << endl;
                            map[y].first--;
                            if (map[y].first == 1)
                                temp1.insert(y);
                        }
                    }

                    map.erase(x);
                }

                temp2.clear();
                // cout << "temp1= ";
                // for (auto x : temp1)
                //     cout << x << " ";
                // cout << endl;
            }

            f = !f;
        }

        // int res = 0;

        // for (auto x : map)
        //     if (x.second.first >= 1)
        //         res++;

        // cout << res << endl;

        cout << map.size() << endl;
    }

    return 0;
}