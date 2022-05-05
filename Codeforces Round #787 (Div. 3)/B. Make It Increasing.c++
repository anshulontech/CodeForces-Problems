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

        vector<int> arr(n);

        for (auto &x : arr)
            cin >> x;

        int res = 0;

        bool isPoss = true;

        if (n != 1 && arr[n - 1] == 0)
        {
            cout << -1 << endl;
            continue;
        }

        for (int j = n - 2; j >= 0; j--)
        {
            while (arr[j] >= arr[j + 1])
            {
                arr[j] /= 2;
                res++;
            }

            if (j != 0 && arr[j] == 0)
            {
                isPoss = false;
                break;
            }
        }

        if (isPoss)
        {
            cout << res << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}