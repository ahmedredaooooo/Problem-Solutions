#include <bits/stdc++.h>

using namespace std;
#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define Time(i, x...) x
#define debug(x...)
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; std::cin >> TC; while(TC--)


vector<int>v;
void generateBeautifulNumbers(int n = 0)
{
    if(n > 1e10)
        return;
    v.push_back(n);
    generateBeautifulNumbers(n*10+4);
    generateBeautifulNumbers(n*10+7);
}

void Solve()
{
    generateBeautifulNumbers();
    sort(allc(v));
    int n;cin >> n;
    int s = 0, e = v.size(), m, ans = 0;
    while (s <= e)
    {
        m = (s + e) / 2;
        if (v[m] >= n)
            e = m - 1, ans = m;
        else
            s = m + 1;
    }
    cout << ans;

}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);

    Solve(), std::cout << "\n";
    return 0;
}