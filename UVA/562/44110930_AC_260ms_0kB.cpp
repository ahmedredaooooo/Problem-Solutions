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

int n, sum;
vector<int>v;
vector<vector<int>>mem;
int Solve(int idx, int sm)
{
    if (idx == n)
        return abs(sm - (sum - sm));

    int &ret = mem[idx][sm];
    if (~ret)
        return ret;
    ret = Solve(idx + 1, sm);
    ret = min(ret, Solve(idx + 1, sm + v[idx]));
    return ret;

}

void Solve()
{
    cin >> n;
    v = vector<int>(n);for(auto & i : v)cin >> i;
    sum = accumulate(allc(v), 0LL);
    mem = vector<vector<int>>(n + 1,vector<int>(sum, -1));

    cout << Solve(0, 0);
//    vector<vector<int>>dp(n + 1, vector<int>(sum, LONG_MAX));
//    dp[0][0] =
//    for (int i = 0; i < n; ++i) {
//
//    }

}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
   Test Solve(), cout << "\n";
    return 0;
}