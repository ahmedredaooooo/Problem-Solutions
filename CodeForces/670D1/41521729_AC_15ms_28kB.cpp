#include "bits/stdc++.h"
using namespace std;
#define ll long long
ll n, k;
vector<ll>a, b;

bool check (int numOfCakes) {
    ll magicPowder = k;
    for (int i = 0; i < n; ++i) {
        ll need = numOfCakes * a[i];
        if (need <= b[i])continue;

        ll remaining = need - b[i];
        if (remaining > magicPowder)return 0;
        magicPowder-=remaining;
    }
    return 1;
}

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    cin >> n >> k;
    a.resize(n), b.resize(n);
    for(auto & i : a)cin >> i;
    for(auto & i : b)cin >> i;
    ll l = 0, r = 2e9+9, ans = -1;
    while (l<=r) {
        ll m = (l + r) / 2;
        if (check(m))
            l = m + 1, ans = m;
        else
            r = m - 1;
    }
    cout << ans << "\n";

}