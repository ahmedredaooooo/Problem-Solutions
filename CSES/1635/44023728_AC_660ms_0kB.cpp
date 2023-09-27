/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;
 
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
 
#define Test int TC; cin >> TC; while(TC--)
int n, x;
vector<int>dp, coins;
 
const int mod = 1e9+7;
 
 
int Solve(int money)
{
    if (money >= x)
        return money == x;
 
    int &ret = dp[money];
    if (~ret)
        return ret;
 
    int ans = 0;
 
    for(auto i : coins)
    {
        (ans += Solve(money + i)) %= mod;
    }
 
    return ret = ans;
}
 
void Solve()
{
    cin >> n >> x;
    coins = vector<int>(n);
    for(auto & i : coins)cin >> i;
    dp = vector<int>(1e6 + 5, -1);
 
    cout << Solve(0);
}
 
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << '\n';
    return 0;
}