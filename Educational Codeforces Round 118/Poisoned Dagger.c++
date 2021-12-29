// Solution:-

#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<int> &arr, long long &time, long long &h)
{
    long long curr = 0;
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] < time)
            curr += arr[i + 1] - arr[i];
        else
            curr += time;
    }

    curr += time;

    if (curr >= h)
        return true;
    return false;
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
        long long n, h;
        cin >> n >> h;

        vector<int> arr(n);
        for (auto &x : arr)
            cin >> x;

        long long start = 1, end = h;

        while (start < end)
        {
            long long mid = start + (end - start) / 2;

            if (isValid(arr, mid, h))
                end = mid;
            else
                start = mid + 1;
        }

        cout << start << endl;
    }

    return 0;
}