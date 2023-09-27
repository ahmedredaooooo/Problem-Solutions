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
    int n;cin >> n;
    vector<int>v(3);
    for(int i = 0, x; i< n; i++)
        cin >> x, v[x % 3]++;

    int ans = 0;
    for(int i = 0; i< 3; i++)
        for(int j = 0; j< 3; j++)
            if(v[j] > n / 3)
            {
                ans += v[j] - n / 3;
                v[(j + 1) % 3] += v[j] - n / 3;
                v[j] = n / 3;
            }
    cout << ans;


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