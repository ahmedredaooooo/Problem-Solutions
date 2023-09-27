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

/*
 * D->A->D
 * D->B->D
 * D->C->D
 *
 */
/*
 * 0 d
 * 1 a
 * 2 b
 * 3 c
 *
 */
int mod = 1e9 + 7;
int n;
vector<vector<int>>dp;
int Solve(int curLengt, int ver)
{
    if (curLengt > n)
        return 0;
    if (curLengt == n)
        return ver == 0;
    int& ret = dp[curLengt][ver];
    if (~ret)
        return ret;

    if (ver == 0)
        ret = ((Solve(curLengt + 1, 1) % mod + Solve(curLengt + 1, 2) % mod) % mod + Solve(curLengt + 1, 3) % mod) % mod;
    if (ver == 1)
        ret = ((Solve(curLengt + 1, 0) % mod + Solve(curLengt + 1, 2) % mod) % mod + Solve(curLengt + 1, 3) % mod) % mod;
    if (ver == 2)
        ret = ((Solve(curLengt + 1, 1) % mod + Solve(curLengt + 1, 0) % mod) % mod + Solve(curLengt + 1, 3) % mod) % mod;
    if (ver == 3)
        ret = ((Solve(curLengt + 1, 1) % mod + Solve(curLengt + 1, 2) % mod) % mod + Solve(curLengt + 1, 0) % mod) % mod;

    return ret % mod;

}
void Solve()
{
   cin >> n;
//   dp = vector<vector<int>>(n, vector<int>(5, -1));
   int  x = 0, prev = 0, ans = 1, t = 0;bool Minus = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (!Minus)
            prev += 1;
        else prev -= 1;
        ans = (prev * 3) ;
        if (ans > mod)
            ans %= mod;
        prev = ans;
        Minus = !Minus;
    }
    cout << prev;
//   cout << Solve(0, 0);
   /*           n/3
1   0           0
2   3           1
3   6           2
4   21          7
5   60          20
6   183         61
7   546         182
8   1641        547
9   4920        1640
10  14763       4921
    */
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}