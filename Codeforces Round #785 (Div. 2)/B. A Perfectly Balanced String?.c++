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

        unordered_map<char, vector<int>> map;

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            map[s[i]].push_back(i);
        }

        int count = map.size();

        bool isValid = true;

        for (auto x : map)
        {
            vector<int> &temp = x.second;

            int len = temp.size();

            for (int i = 0; i < len - 1; i++)
                if ((temp[i + 1] - temp[i]) < count)
                {
                    isValid = false;
                    break;
                }

            if (!isValid)
                break;
        }

        if (isValid)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}