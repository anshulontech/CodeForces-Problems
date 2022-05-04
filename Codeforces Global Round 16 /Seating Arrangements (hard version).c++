// Solution:-
#include <bits/stdc++.h>

using namespace std;

static bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second < b.second;
}

int helper(vector<int> &arr)
{
    int m = arr.size();
    vector<int> temp;

    int res = 0;

    for (int i = 0; i < m; i++)
    {
        temp.push_back(arr[i]);
        sort(temp.begin(), temp.end());
        int idx = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();

        res += idx;
    }

    return res;
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> arr(n * m);

        for (int i = 0; i < n * m; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i + 1;
        }

        sort(arr.begin(), arr.end());

        int res = 0;

        for (int i = 0; i < n; i++)
        {
            sort(arr.begin() + i * m, arr.begin() + i * m + m, cmp);

            vector<int> temp(m);

            for (int k = 0; k < m; k++)
                temp[k] = arr[i * m + k].first;

            res += helper(temp);
        }

        cout << res << endl;
    }

    return 0;
}