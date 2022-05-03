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

        vector<int> arr(n, 0);

        for (auto &x : arr)
            cin >> x;

        vector<int> temp = arr;

        sort(temp.begin(), temp.end());

        bool isAcceptable = true;

        for (int i = n - 1; i >= 0; i -= 2)
            if (i == 0)
            {
                if (temp[i] != arr[i])
                    isAcceptable = false;
            }
            else
            {
                if ((temp[i] == arr[i] && temp[i - 1] == arr[i - 1]) || (temp[i] == arr[i - 1] && temp[i - 1] == arr[i]))
                {
                }
                else
                {
                    isAcceptable = false;
                    break;
                }
            }

        if (isAcceptable)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}