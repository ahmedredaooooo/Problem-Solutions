//
// Created by ahmed on 02/07/2023.
//
/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)


void Solve() 
{
    int n, ans = LLONG_MAX;cin >> n;
    map<int, int> mp;
    vector<int> v;
 
    for (int i = 0, x; i < n; ++i) cin >> x, mp[x]++;

    for (auto [l, r]: mp)
        v.push_back(r);

    sort(allc(v));
    int sum = accumulate(allc(v), 0LL);
    int prev = 0;
    
    for (int i = 0; i < v.size(); ++i) 
    {
        int tmp = sum - (v.size() - i) * v[i] + prev;
        ans = min({ans, tmp});
        sum -= v[i];
        prev += v[i];
    }
    
    cout << ans;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
   Test Solve(), cout << "\n";
    return 0;
}

