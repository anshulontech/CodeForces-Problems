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

        vector<int> arr(n);

        for (auto &x : arr)
            cin >> x;

        vector<int> store(32, 0);

        for (int i = 0; i < 32; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] % 2 == 1)
                    store[i]++;

                arr[j] /= 2;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            bool res = true;

            for (int j = 0; j < 32; j++)
                if (store[j] % i != 0)
                {
                    res = false;
                    break;
                }

            if (res)
                cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}