// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        int firstValue = INT_MIN, secondValue = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            firstValue = max(firstValue, max(a[i], b[i]));

            secondValue = max(secondValue, min(a[i], b[i]));
        }

        cout << firstValue * secondValue << endl;
    }

    return 0;
}