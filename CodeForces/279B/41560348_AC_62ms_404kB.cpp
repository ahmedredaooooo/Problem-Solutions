#include "bits/stdc++.h"
using namespace std;
int n, t, p1, p2, ans, l, r, m;
vector<int>a, v;


signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);

    cin >> n >> t, a.resize(n + 1);
    for (int i = 1; i <= n; ++i) cin >> a[i];
    partial_sum(a.begin(), a.end(), a.begin());
    for (int i = 1; i <= n; ++i) {
        l = i, r = n;
        while (l <= r) {
            m = (l + r) / 2;
            a[m] - a[i - 1] <= t ?
            l = m + 1,
            ans = max(ans, m - i + 1)
                                 : r = m - 1;
        }

    }
    cout << ans << "\n";
}