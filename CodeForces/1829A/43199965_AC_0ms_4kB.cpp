#include <bits/stdc++.h>

using namespace std;
//#ifndef ONLINE_JUDGE
//#include "Debug.cpp"
//#define FileI(fileName)
//#define FileO(fileName)
//#else
//#define FileI(fileName) freopen(#fileName, "r", stdin);
//#define FileO(fileName) freopen(#fileName, "w", stdout);
//#define debug(...) 1
//#define Time(i, x...) x
//#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; std::cin >> TC; while(TC--)
LL mod = 1e9 + 7;
LL multiply(int a, int b)
{
    return ((a % mod) * (b % mod)) % mod;
}

void Solve() {
    int c = 0;
   string s = "codeforces";
   string ss;
   cin >> ss;
    for (int i = 0; i < ss.size(); ++i) {
        if (s[i] != ss[i])
            c++;
    }
    cout << c;
}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);

    Test Solve(), cout << "\n";
    return 0;
}