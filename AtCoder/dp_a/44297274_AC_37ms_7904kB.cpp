#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
vector<int>v;
vector<int>dp;

int Solve(int i)
{
    if (i >= n - 1)
        return 0;
    int &ret = dp[i];
    if (~ret)
        return ret;
    if (i + 1 < n)
        ret = Solve(i + 1) + abs(v[i] - v[i + 1]);
    if (i + 2 < n)
        ret = min(ret, Solve(i + 2) + abs(v[i] - v[i + 2]));
    return ret;

}


signed main()
{
    cin >> n;
    v = vector<int>(n);
    dp = vector<int>(n, -1);
    for(auto &i : v)cin >> i;
    cout << Solve(0);
}