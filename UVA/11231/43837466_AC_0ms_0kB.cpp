//
// Created by ahmed on 27/06/2023.
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


enum color{black, white};
void Solve()
{
    int n, m, c;

    while (cin >> n >> m >> c/* && n && m && c*/)
    {
        if (!(n || m || c))break;
        int t = (n - 7) * (m - 7);
        if (t & 1)
            cout << (c == black ? t / 2 : (t + 1) / 2) << '\n';
        else
            cout << t / 2 << '\n';
    }
}


signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve()/*, cout << "\n"*/;
    return 0;
}

