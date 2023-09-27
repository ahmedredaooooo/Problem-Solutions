#include <bits/stdc++.h>
using namespace std;

#define mod(x) (((x) % mod + mod) % mod)
#define modp(x) ((x) % mod)
#define modAdd(x, y) mod(modp(x) + modp(y))
//#define int long long

int n, x;
vector<int>v;
const signed mod = 1e9 + 7LL;
vector<int>dp;
int Solve(int sum)
{
//    cout << "sum = " << sum << '\n';
    if (sum >= x)
        return sum == x;
    int &ret = dp[sum];
    if (~ret)
        return ret;
    int tmp = 0;
    for(auto coin : v)
        (tmp += Solve(sum + coin)) %= mod;
    return ret = tmp;
}

void Solve()
{
    cin >> n >> x;
    v = vector<int>(n), dp = vector<int>(x + 1, -1);
    for(auto & i : v)cin >> i;
    cout << Solve(0);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << '\n';
}
