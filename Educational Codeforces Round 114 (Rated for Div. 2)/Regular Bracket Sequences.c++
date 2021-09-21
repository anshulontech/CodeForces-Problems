// Solution:-

#include <bits/stdc++.h>
using namespace std;

void helper(int open, int close, string &s, vector<string> &res, int n)
{
    if (open == 0 && close == 0)
    {
        res.push_back(s);
    }

    if (res.size() == n)
        return;

    if (open != 0)
    {
        s += '(';
        helper(open - 1, close, s, res, n);
        s.pop_back();
    }

    if (close > open)
    {
        s += ')';
        helper(open, close - 1, s, res, n);
        s.pop_back();
    }

    return;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> res;
        string s = "";

        helper(n, n, s, res, n);

        for (auto x : res)
            cout << x << endl;
    }

    return 0;
}