// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int count1 = 0, count2 = 0;

        for (auto x : s)
            if (x == '1')
                count1++;
            else
                count2++;

        if (count2 == 1 || count2 == 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else
            cout << "YES" << endl;

        vector<vector<char>> res(n, vector<char>(n, ' '));

        unordered_set<int> won;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                {
                    res[i][j] = 'X';
                }
                else if (s[i] == '1' || s[j] == '1')
                {
                    res[i][j] = '=';
                    res[j][i] = '=';
                }
                else if (res[i][j] != ' ')
                    continue;
                else if (won.find(i) != won.end())
                {
                    won.insert(j);
                    res[i][j] = '-';
                    res[j][i] = '+';
                }
                else
                {
                    won.insert(i);
                    res[i][j] = '+';
                    res[j][i] = '-';
                }
            }

        for (auto x : res)
        {
            for (auto y : x)
                if (y == ' ')
                    cout << '-';
                else
                    cout << y;

            cout << endl;
        }
    }

    return 0;
}