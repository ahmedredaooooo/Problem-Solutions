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


void Solve() {
    string s, t;
    cin >> s >> t;

    vector<vector<int>> dp(s.size() + 1, vector<int>(t.size() + 1));
    for (int i = 0; i < s.size(); ++i) {
        for (int j = 0; j < t.size(); ++j) {
            if (s[i] == t[j])
                dp[i + 1][j + 1] = max(dp[i + 1][j + 1], dp[i][j] + 1);
            else
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        }
    }
//    for (auto i: dp)
//    {
//        {
//            for (auto j: i)
//                cout << j << " ";
//        }
//        cout << "\n";
//    }
string ss = "";
    int i = s.size(), j = t.size();
    while (i && j)
    {
        if (s[i-1] == t[j-1])
            ss += s[i-1], i--, j--;
         else if (dp[i][j-1] > dp[i-1][j])
            j--;
        else
            i--;
    }

    cerr << dp[s.size()][t.size()];
    reverse(allc(ss));
    cout << ss;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}