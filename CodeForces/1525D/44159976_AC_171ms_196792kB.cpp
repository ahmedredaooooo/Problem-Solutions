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

int n, inf = LONG_MAX;const int x = 5e3 + 5;
vector<vector<int>>v;
int dp[x][x];
int Solve(int i, int j)
{
    if(i == v[1].size())
        return 0;
    if(j == v[0].size())
        return inf;
    int &ret = dp[i][j];
    if (~ret)
        return ret;
    //  replace the from busy pos to free pos  ||  replace another one
    return ret = min( Solve(i + 1 , j + 1) + abs(v[0][j] - v[1][i]), Solve(i , j + 1));
}

void Solve()
{
    cin >> n;
    v = vector<vector<int>>(2);
    for (int i = 0, x; i < n; ++i)
        cin >> x, v[x].push_back(i);
    ::memset(dp, -1, sizeof dp);

    cout << Solve(0, 0);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}