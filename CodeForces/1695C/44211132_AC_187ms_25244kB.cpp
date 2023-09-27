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
int n, m;
vector<vector<int>> dp1, dp2, grid;

int SolveMx(int i, int j)
{
    if (i == n - 1 && j == m - 1)
        return grid[i][j];
    int &ret = dp1[i][j];
    if (~ret)
        return ret;
    ret = LONG_MIN;
    if (j < m - 1)
        ret = SolveMx(i, j + 1) + grid[i][j];
    if (i < n - 1)
        ret = max(ret, SolveMx(i + 1, j) + grid[i][j]);
    return ret;
}
int SolveMn(int i, int j)
{
    if (i == n - 1 && j == m - 1)
        return grid[i][j];
    int &ret = dp2[i][j];
    if (~ret)
        return ret;
    ret = LONG_MAX;
    if (j < m - 1)
        ret = SolveMn(i, j + 1) + grid[i][j];
    if (i < n - 1)
        ret = min(ret, SolveMn(i + 1, j) + grid[i][j]);
    return ret;
}

void Solve()
{
    cin >> n >> m;
    grid = dp1 = dp2 = vector<vector<int>>(n, vector<int>(m, -1));
    for(auto & i : grid)for(auto & j : i)cin >> j;

    cout << (((n & 1) != (m & 1) && SolveMx(0, 0) >= 0 && SolveMn(0, 0) <= 0) ? "YES" : "NO");


}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
   Test Solve(), cout << "\n";
    return 0;
}