/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

//void generate(int n)
//{
//
//}

void Solve()
{

    int n; cin >> n;
    int sol = 0;
    for (int i = 1; i <= 9; ++i) {

        int val = i;
        while (val <= n)
        {
            val = val * 10 + i;
            sol++;
        }
    }
    cout << sol;

}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Test Solve(), cout << "\n";
    return 0;
}

