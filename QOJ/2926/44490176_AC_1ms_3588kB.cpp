/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
//#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define FileI(fileName) freopen(#fileName, "r", stdin);

#define Test int TC; cin >> TC; while(TC--)


void Solve()
{
    int n, time = 1, lag = 0;cin >> n;
    vector<pair<int, int>>vp (n);
    for (auto & [l, r] : vp)cin >> r >> l;
    sort(allc(vp));

    for (int i = 0; i < n; ++i)
        if (vp[i].second > time)
            lag += (vp[i].second - time), time = vp[i].second + 1;
        else
            ++time;

    cout << lag;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
     Solve(), cout << "\n";
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