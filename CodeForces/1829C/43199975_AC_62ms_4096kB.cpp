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
    int n;
    cin >> n;
    vector<int> v00, v01, v10, v11;
    string s;
    for (int i = 0, x; i < n; ++i) {
        cin >> x >> s;
        if (s == "00")
            v00.push_back(x);
        if (s == "01")
            v01.push_back(x);
        if (s == "10")
            v10.push_back(x);
        if (s == "11")
            v11.push_back(x);
    }
    sort(allc(v00));
    sort(allc(v01));
    sort(allc(v10));
    sort(allc(v11));
    if (v11.size() && v10.size() && v01.size()) {
        cout << min(v11[0], v10[0] + v01[0]);
        return;
    }
    if (v11.size()) {
        cout << v11[0];
        return;
    }

    if (v10.size() && v01.size()) {
        cout << v10[0] + v01[0];
        return;
    }
    cout << -1;
}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);

    Test Solve(), cout << "\n";
    return 0;
}