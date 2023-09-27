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


void Solve()
{
    int n, mx = 0, c = 1; cin >> n;
    vector<int> v(n), vv;
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(allc(v));
    vv = v;
    int uniqu = unique(allc(vv)) - vv.begin();

    for (int i = 1; i < n; ++i)
        if (v[i] != v[i - 1]) mx = max(c, mx), c = 1;
        else c++;
    mx = max(mx, c);

    cout << max(min(uniqu - 1, mx), min(mx - 1, uniqu)) << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Test Solve(), cout << "\n";
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