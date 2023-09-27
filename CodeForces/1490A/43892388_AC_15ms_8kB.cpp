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
    int n, c = 0;cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (i)
        {
            int t1  = v[i-1], t2 = v[i];
            if (t1 > t2)
                swap(t1, t2);

            while (t2 > 2 * t1)
                t1 *= 2, c++;

        }

    }
cout << c;
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Test Solve(), cout << "\n";
    return 0;
}

