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
        int x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        double num1 = x1, num2 = x2;

        while (num1 > 9)
        {
            p1++;
            num1 /= (10.0);
        }

        while (num2 > 9)
        {
            p2++;
            num2 /= (10.0);
        }

        if (p1 > p2)
            cout << ">";
        else if (p1 < p2)
            cout << "<";
        else if (num1 > num2)
            cout << ">";
        else if (num1 < num2)
            cout << "<";
        else
            cout << "=";

        cout << endl;
    }

    return 0;
}