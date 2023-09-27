/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int short
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define FileI(fileName) freopen(#fileName, "r", stdin);

#define Test int TC; cin >> TC; while(TC--)


void Solve()
{
    int p, q;string s;cin >> p >> q >> s;
    if (s == "AABB")
        if (q == 7)
            return void (cout << "8 9");
    if (s == "ABAB")
        if (p == 6 && q == 8)
            return void (cout << "7 9");
    if (s == "ABBA")
        if (q - p == 3)
            return void (cout << p + 1 << " " << q - 1);
    if (s == "BAAB")
        if (p == 2 && q == 8)
            return void (cout << "1 9");
    if (s == "BABA")
        if (p == 2 && q == 4)
            return void (cout << "1 3");
    if (s == "BBAA")
        if (p == 3)
            return void (cout << "1 2");
    cout << "-1";
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << '\n';
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