/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;


#define LL long long
#define int LL


#define Test int TCTC; cin >> TCTC; while(TCTC--)

set<LL>powersOfThree = {1};
void pre()
{
    int x = 3;
    while (x <= 1e18 + 10)
        powersOfThree.insert(x), x *= 3;
}

void Solve()
{
    int n, sum = 0, mx = LLONG_MIN;cin >> n;
    for (int i = 0, t; i < n; ++i)
       cin >> t, sum += t, mx = max(t, mx);
    cout << fixed << setprecision(8) << mx + (double)(sum - mx) / (n - 1);


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