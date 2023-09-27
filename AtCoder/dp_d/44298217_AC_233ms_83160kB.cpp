#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>>dp;
int n, w;
struct item
{
    int wieght, value;
};
vector<item>items;

int Solve(int i, int remainingCapacity)
{
    if (i == n)
        return 0;

    int &ret = dp[i][remainingCapacity];
    if (~ret)
        return ret;

    ret = Solve(i + 1, remainingCapacity);
    if (remainingCapacity + items[i].wieght <= w)
        ret = max(ret, Solve(i + 1, remainingCapacity + items[i].wieght) + items[i].value);
    return ret;
}
signed main()
{
    cin >> n >> w;
    items = vector<item>(n);
    dp = vector<vector<int>>(n + 1, vector<int>(w + 1, -1));
    for(auto&[l,r] : items)cin >> l >> r;
    cout << Solve(0, 0);
}