// Solution:-

#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    vector<node *> child;

    node(int value)
    {
        val = value;
    }
};

void dfs(node *root, int &counter, vector<vector<int>> &res)
{
    if (res.size() == counter)
        res.push_back({});

    res[counter].push_back(root->val);

    for (auto x : root->child)
        dfs(x, counter, res);

    if (root->child.size() == 0)
        counter++;
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
        int n;
        cin >> n;

        vector<int> arr(n);

        for (auto &x : arr)
            cin >> x;

        unordered_map<int, node *> map;

        for (int i = 1; i <= n; i++)
        {
            map[i] = new node(i);
        }

        int idx = -1;

        for (int i = 1; i <= n; i++)
        {
            if (i == arr[i - 1])
            {
                idx = i;
                continue;
            }

            node *par = map[arr[i - 1]];
            node *children = map[i];

            par->child.push_back(children);
        }

        vector<vector<int>> res;
        int counter = 0;

        dfs(map[idx], counter, res);

        cout << res.size() << endl;

        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i].size() << endl;

            for (auto x : res[i])
                cout << x << " ";

            cout << endl;
        }
        cout << endl;
    }
    return 0;
}