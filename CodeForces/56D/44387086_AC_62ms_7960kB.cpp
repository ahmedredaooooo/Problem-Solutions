/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define FileI(fileName) freopen(#fileName, "r", stdin);

#define Test int TC; cin >> TC; while(TC--)
string s, t;
int dp[1003][1003];
int Solve(int i, int j)
{
    if (i == s.size() && j == t.size())
        return 0;
    auto &ret = dp[i][j];
    if (~ret)return ret;
    ret = 2e15;
    if (s[i] == t[j])
        ret = Solve(i + 1, j + 1);
    if (i < s.size() && j < t.size())                   //replace
        ret = min(ret, Solve(i + 1, j + 1) + 1);
    if (i < s.size())                                   //delete
        ret = min(ret, Solve(i + 1, j) + 1);
    if (j < t.size())                                   //insert
        ret = min(ret, Solve(i, j + 1) + 1);

    return ret;
}

void SolveB(int i, int j)
{
    if (i == s.size() && j == t.size())return;
    int ret = dp[i][j];
    if (s[i] == t[j] && ret == Solve(i + 1, j + 1))
        SolveB(i + 1, j + 1);
    else if (i < s.size() && j < t.size() && ret == Solve(i + 1, j + 1) + 1)               //replace
        cout << "REPLACE " << j + 1 << " " << t[j] << '\n', SolveB(i + 1, j + 1);
    else if(j < t.size() && ret == Solve(i, j + 1) + 1)                                    //insert
        cout << "INSERT " << j + 1 << " " << t[j] << '\n', SolveB(i, j + 1);
    else if(i < s.size() && ret == Solve(i + 1, j) + 1)                                    //delete
        cout << "DELETE " << j + 1 << '\n',  SolveB(i + 1, j);

}

void Solve()
{
    //  definition dp[idx1][idx2] :
    cin >> s >> t;
    ::memset(dp, -1, sizeof dp);
    cout << Solve(0, 0) << '\n';SolveB(0, 0);

}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
