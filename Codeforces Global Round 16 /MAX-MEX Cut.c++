// Solution:-

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s1, s2;
        cin >> s1 >> s2;

        int res = 0;
        bool is0Present = false, isOnePresent = false;

        for (int i = 0; i < n; i++)
        {
            if ((s1[i] == '0' && s2[i] == '1') || (s1[i] == '1' && s2[i] == '0'))
            {
                is0Present = false;
                isOnePresent = false;

                res += 2;
            }
            else
            {
                if (s1[i] == '1' && s2[i] == '1')
                {
                    if (is0Present)
                    {
                        res++;
                        is0Present = false;
                        isOnePresent = false;
                    }
                    else
                    {
                        isOnePresent = true;
                    }
                }
                else
                {
                    if (isOnePresent)
                    {
                        res += 2;
                        is0Present = false;
                        isOnePresent = false;
                    }
                    else
                    {
                        res++;
                        is0Present = true;
                    }
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}