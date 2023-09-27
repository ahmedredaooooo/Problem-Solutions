/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;


#define LL long long
//#define int LL


#define Test int TCTC; cin >> TCTC; while(TCTC--)


void Solve()
{
   int x1, y1, x2, y2;cin >> x1 >> y1 >> x2 >> y2;
   int dx = abs(x1 - x2), dy = abs(y1 - y2);
    if (x1 == x2 && y1 == y2)
        return void (cout << "0 0 0");
    if (x1 == x2 || y1 == y2)
        cout << "1 ";
    else cout << "2 ";
    if (dx == dy)
        cout << "1 ";
    else if ((dx & 1) == (dy & 1))
        cout << "2 ";
    else cout << "0 ";

    cout << max(dx, dy);
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