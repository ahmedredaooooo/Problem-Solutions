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
vector<int>dp;
const int mod = 1e9 + 7;
int n;
int rec(int num)
{
    if (num >= n)
        return num == n;
 
    int &ret = dp[num];
    if (~ret)
        return ret;
 
    ret = 0;
    for (int i = 1; i <= 6; ++i)
        ret += rec(num + i) % mod;
 
    return ret % mod;
}
 
void Solve()
{
    cin >> n;
    dp = vector<int>(n + 5/*, -1*/);
    dp[0] = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= 6 && i - j >= 0; ++j)
            (dp[i] += dp[i - j]) %= mod;
    }
    cout << dp[n];
//    cout << rec(0) << "\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
 
 
/*
         ,_         _,
         |\\.-"""-.//|
         \`         `/
        /    _   _    \
        |    a _ a    |
        '.=    Y    =.'
          >._  ^  _.<
         /   `````   \
         )           (
        ,(           ),
       / )   /   \   ( \
       ) (   )   (   ) (
       ( )   (   )   ( )
       )_(   )   (   )_(-.._
      (  )_  (._.)  _(  )_, `\
       ``(   )   (   )`` .' .'
          ```     ```   ( (`
                         '-'
*/
