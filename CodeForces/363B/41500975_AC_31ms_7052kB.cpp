/*                                                    لا اله الا الله محمد رسول الله                                                            */
#include "bits/stdc++.h"
using namespace std;

long long n, k, mn = INT32_MAX, idx;
vector<long long>v(9e5+5, 111);

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);

    cin >> n >> k;

    for (int i = 1; i <= n; ++i)cin >> v[i];v[0] = 0;

    partial_sum(v.begin(), v.end(), v.begin());

    for (int i = 1; i <= n; ++i)
        if (v[i+k-1] - v[i-1] < mn)
            mn = min(mn, v[i+k-1] - v[i-1]),
            idx = i;

    cout << idx;
}