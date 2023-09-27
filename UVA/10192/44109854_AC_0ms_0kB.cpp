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

string s, t;
vector<vector<int>>memo, dp;
int Solve(int i , int j)
{
    if (i == s.size() || j == t.size())
        return 0;
    int &ret = memo[i][j];
    if (~ret)
        return ret;

    if (s[i] == t[j])
        return ret = 1 + Solve(i + 1, j + 1);
    return ret = max(Solve(i + 1, j), Solve(i, j + 1 ));
}
int Case = 1;
void Solve()
{
//    memo = vector<vector<int>>(s.size(), vector<int>(t.size(), - 1));
    dp = vector<vector<int>>(s.size() + 1, vector<int>(t.size() + 1));
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < t.size(); ++j) {
            if (s[i] == t[j])
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1], 1 + dp[i][j]);
            else
            {
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
//    cout << dp[s.size()][t.size()];
    cout << "Case #"<< Case++ << ": you can visit at most "<< dp[s.size()][t.size()] <<" cities.\n";


}

signed main()
{
//    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    while (1)
    {
        getline(cin, s);
        getline(cin, t);
        if (s == "#")
            break;
        Solve();
    }
    return 0;
}