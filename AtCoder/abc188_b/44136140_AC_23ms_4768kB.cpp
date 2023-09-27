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


void Solve()
{
    int n;cin >> n;
    vector<int>a(n), b(n);
    for(auto & i : a)cin >> i;
    for(auto & i : b)cin >> i;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += a[i] * b[i];
    }
    if (!ans)
        cout << "Yes\n";
    else
        cout << "No\n";
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}