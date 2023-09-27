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
    int n = 0, o = 0, e = 0, k;cin >> n >> k;
    vector<int>v(n), Oindex;
//    for(auto & i : v)cin >> i, (i & 1) ? o++:e++;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        if (v[i] & 1)
            o++, Oindex.push_back(i + 1);
        else
            e++;

    }

    if (o < k || o > k && ((o - k) & 1))
        return void(cout << "NO");

    cout << "YES\n";
    for (int i = 0; i < k - 1; ++i) {
        cout << Oindex[i] << " ";
    }
    cout << n;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
   Test Solve(), cout << "\n";
    return 0;
}

