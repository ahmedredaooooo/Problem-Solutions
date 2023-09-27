//
// Created by ahmed on 06/07/2023.
//
/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

int n;
vector<int>v;
vector<int>dp;

int Solve(int idx) {
    if (idx >= n)
        return 0;
    auto &ret = dp[idx];
    if (~ret)
        return ret;
    if (idx == n - 1)
        return ret = Solve(idx + 1) + abs(v[idx] - v[idx + 1]);
    else
        return ret = min(Solve(idx + 1) + abs(v[idx] - v[idx + 1]), Solve(idx + 2) + abs(v[idx] - v[idx + 2]));
}

void Solve()
{
    cin >> n;
    v = vector<int>(n);
    dp = vector<int>(n + 2, -1);
    for(auto & i  : v) cin >> i;v.push_back(v.back());
    cout << Solve(0);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}

