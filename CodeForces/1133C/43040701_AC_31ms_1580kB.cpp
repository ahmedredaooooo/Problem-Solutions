#include <bits/stdc++.h>
using namespace std;
#define int long long
void Solve()
{
    int n;cin >> n;
    vector<int>v(n);
    for(auto & i : v)cin >> i;
    sort(v.begin(), v.end());
    int p1 = 0, p2 = 0, mx = LLONG_MIN;
    while (p1 < n)
    {
        while (v[p2] - v[p1] <= 5 && p2 < n)
            p2++;
        p1++;
        mx = max(mx, p2 - p1 + 1);
    }
    cout << mx;
}

signed main()
{
    std::ios_base::sync_with_stdio(0); std::cin.tie(0); std::cerr.tie(0); std::cout.tie(0);
    Solve(), cout << "\n";

}
