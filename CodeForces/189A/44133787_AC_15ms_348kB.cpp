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

int n, arr[3];
vector<int> dp;

int Solve(int m)
{
    if (!m)
        return 0;
    if (m < 0)
        return LONG_MIN;
    auto &ret = dp[m];
    if (~ret)
        return ret;
    ret = LLONG_MIN;
    for(auto i : arr)
        ret = max(ret, Solve(m - i) + 1);
    return ret;
}


void Solve()
{
    cin >> n;
    for (int i = 0; i <= 2; ++i)cin >> arr[i];
    dp = vector<int>(n + 2, -1);
    cout << Solve(n);
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
				 		 	    		  		    	 						