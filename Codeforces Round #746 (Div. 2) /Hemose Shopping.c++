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
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for (auto &y : arr)
            cin >> y;

        if (x <= x / 2)
        {
            cout << "YES" << endl;
            continue;
        }

        int start = n - x, end = x - 1;

        vector<int> temp = arr;

        sort(temp.begin(), temp.end());

        bool isFound = false;

        while (start <= end)
            if (temp[start] != arr[start] || temp[end] != arr[end])
            {
                isFound = true;
                break;
            }
            else
                start++, end--;

        if (isFound)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}