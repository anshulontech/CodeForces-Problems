// Solution:-

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, m;
        cin >> a >> b >> c >> m;

        vector<int> arr = {a, b, c};

        sort(arr.begin(), arr.end());

        if (m > (a + b + c - 3))
        {
            cout << "NO" << endl;
            continue;
        }

        int temp = arr[2] - (arr[0] + arr[1] + 1);

        if (m >= temp)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}