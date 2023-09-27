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

int n;
vector<int>v;
int dp[201][20004];

int Solve(int idx, int time = 1)
{
    if (idx == n)
        return 0;
    if (time > 2 * n)
        return 1e17;
    auto &ret = dp[idx][time];
    if (~ret)
        return ret;
    return ret = min({Solve(idx, time + 1), abs(v[idx] - time) + Solve(idx + 1, time + 1)});

}

void Solve()
{
    ::memset(dp, -1, sizeof dp);
    cin >> n;
    v = vector<int>(n);
    for(auto &i : v)cin >> i;
    sort(allc(v));
    cout << Solve(0);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
  Test  Solve(), cout << "\n";
    return 0;
}
/*
            *      ,MMM8&&&.            *
                  MMMM88&&&&&    .
                 MMMM88&&&&&&&
     *           MMM88&&&&&&&&
                 MMM88&&&&&&&&
                 'MMM88&&&&&&'
                   'MMM8&&&'      *
          |\___/|
          )     (             .              '
         =\     /=
           )===(       *
          /     \
          |     |
         /       \
         \       /
  _/\_/\_/\__  _/_/\_/\_/\_/\_/\_/\_/\_/\_/\_
  |  |  |  |( (  |  |  |  |  |  |  |  |  |  |
  |  |  |  | ) ) |  |  |  |  |  |  |  |  |  |
  |  |  |  |(_(  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
  |  |  |  |  |  |  |  |  |  |  |  |  |  |  |
*/