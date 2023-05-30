#include <bits/stdc++.h>

using namespace std;
//#ifndef ONLINE_JUDGE
//#include "Debug.cpp"
//#define FileI(fileName)
//#define FileO(fileName)
//#else
//#define FileI(fileName) freopen(#fileName, "r", stdin);
//#define FileO(fileName) freopen(#fileName, "w", stdout);
//#define debug(...) 1
//#define Time(i, x...) x
//#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; std::cin >> TC; while(TC--)
LL mod = 1e9 + 7;
LL multiply(int a, int b)
{
    return ((a % mod) * (b % mod)) % mod;
}

map<int, int>primeFactors(int n)
{
    map<int, int>mp;
    for (int i = 2; i * i <= n; ++i)
        while (n % i == 0)
            mp[i]++, n /= i;
    if (n > 1)
        mp[n]++;
    return mp;
}

void Solve()
{
    int n;
    cin >> n;
    map<int, int>mp = primeFactors(n);
    pair<int, int>p;
    int mx =  -1;
    for (auto i : mp)
    {
        if (i.second > mx)
            p = i, mx = i.second;
    }

    cout << p.second << "\n";


    {
        while (--p.second)cout << p.first << " ", n /= p.first;
        cout << n;

    }

}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);

    Test Solve(), cout << "\n";
    return 0;
}
