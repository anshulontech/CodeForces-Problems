// Soution:-

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
        string s;

        cin >> s;

        int count1 = 0, count2 = 0;

        int n = s.size();
        bool isFound = false;

        for (int i = n - 1; i >= 0; i--)
            if (isFound)
            {
                if (s[i] == '5' || s[i] == '0')
                    break;
                else
                    count1++;
            }
            else if (s[i] == '0')
                isFound = true;
            else
                count1++;

        isFound = false;

        for (int i = n - 1; i >= 0; i--)
            if (isFound)
            {
                if (s[i] == '7' || s[i] == '2')
                    break;
                else
                    count2++;
            }
            else if (s[i] == '5')
                isFound = true;
            else
                count2++;

        cout << min(count1, count2) << endl;
    }

    return 0;
}