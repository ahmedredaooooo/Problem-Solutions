/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;


#define LL long long
//#define int LL


#define Test int TCTC; cin >> TCTC; while(TCTC--)


void Solve()
{
    int n, q;LL sum = 0;cin >> n >> q;
    vector<LL>prefix;vector<int> idxOfPrefixes;
    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        sum += x;
        if (prefix.empty() || sum >= prefix.back())
            prefix.push_back(sum), idxOfPrefixes.push_back(i);
    }

    while (q--)
    {
        int val, seconds = 0;cin >> val;
        if (sum <= 0 && prefix.back() < val)
        {
            cout << "-1 ";
            continue;
        }
            if (prefix.back() < val)
                seconds = (val - prefix.back() + sum - 1) / sum;
            val -= seconds * sum;
            cout << (LL)((LL)seconds * (LL)n + (LL)idxOfPrefixes[lower_bound(prefix.begin(), prefix.end(), val) - prefix.begin()]) << " ";
    }
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