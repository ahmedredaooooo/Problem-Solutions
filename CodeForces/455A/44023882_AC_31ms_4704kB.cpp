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


int n;
vector<int> dp, freq;

int Solve(int num)
{
    if (num >= (int)1e5 + 10)
        return 0;
    int &ret = dp[num];
    if (~ret)
        return ret;

    return ret = max(Solve(num + 1), num * freq[num] + Solve(num + 2));
}

void Solve()
{
    cin >> n;
    freq = vector<int>(1e5 + 10);
    dp = vector<int>(1e5 + 10, -1);

    for (int i = 0, x; i < n; ++i)
        cin >> x, freq[x]++;

    cout << Solve(0);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}