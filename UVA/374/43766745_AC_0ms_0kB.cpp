/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
//40mins
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define ll LL

#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

vector<int>factorialNumbers;
int factorial(int n)
{
    if (!n)
        return 1;
    return n * factorial(n - 1);
}
void generateFactorialNumbers()
{
    for (int i = 0; i < 21; ++i)
    {
        factorialNumbers.push_back(factorial(i));
    }
}


int mod = 1e9 + 7;
int multiply(int n, int m)
{
    return (n % mod * m % mod) % mod;
}
int fast_pow(int n, int m) // log2(power), base = n, power = m
{
    if (!m)
        return 1;
    if (m == 1)
        return n;
    if (m&1)
        return multiply(n, fast_pow(multiply(n, n), m/2));
    return fast_pow(multiply(n,n), m/2);
}
inline ll exp(ll b, ll p, ll m)
{
    ll r=1;
    while(p)
    {
        if(p&1)
            r = r * b % m;
        b = b * b % m;
        p /= 2;
    }
    return r;
}

void Solve()
{

   int b, p, m, ans = 1;
   string s;
    while (cin >> b >> p >> m)
    {
//        getline(cin, s);
        mod = m;
        cout << (LL) fast_pow(b, p) << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
      Solve();
    return 0;
}

