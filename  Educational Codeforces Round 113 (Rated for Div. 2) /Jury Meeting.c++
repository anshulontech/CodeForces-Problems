// Solution:-

#include <bits/stdc++.h>

using namespace std;

unordered_map<long long, long long> facto;
long long mod = 998244353;
typedef long long ll;

const ll cons = 200005;
ll fact[cons + 2], invfact[cons + 2];

ll mpow(ll a, ll n, ll p)
{
    a %= p;
    ll res = 1;
    while (n > 0)
    {
        if (n & 1LL)
            res = res * a % p;
        a = a * a % p;
        n >>= 1;
    }
    return res;
}

void precomp(ll n, ll p)
{
    fact[0] = 1;
    ll i = 0;
    for (i = 1; i < n; i++)
        fact[i] = (fact[i - 1] * i) % p;
    i--;
    invfact[i] = mpow(fact[i], p - 2, p);
    for (i--; i >= 0; i--)
    {
        invfact[i] = invfact[i + 1] * (i + 1) % p;
    }
}

long long mul(long long a, long long b)
{
    return ((a % mod) * (b % mod)) % mod;
}

long long C(long long n, long long r)
{
    if (n < r || n < 0 || r < 0)
        return 0;

    if (r == 0)
        return 1;

    return fact[n] * invfact[r] % mod * invfact[n - r] % mod;
}

int main()
{
    long long t;
    cin >> t;

    precomp(cons, mod);

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> arr(n);

        for (auto &x : arr)
            cin >> x;

        sort(arr.begin(), arr.end());

        if ((arr[n - 1] - arr[n - 2]) > 1)
        {
            cout << 0 << endl;
            continue;
        }
        else if (arr[n - 1] == arr[n - 2])
        {
            cout << fact[n] << endl;
            continue;
        }

        long long count = 0;

        for (long long i = n - 2; i >= 0; i--)
            if (arr[i] == arr[n - 2])
                count++;
            else
                break;

        cout << ((fact[n] - mul(C(n, count + 1), mul((fact[n - count - 1]), fact[count]))) % mod + mod) % mod << endl;
    }

    return 0;
}