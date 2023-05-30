#include "bits/stdc++.h"
using namespace std;
int n, p1, p2, ans;
vector<int>a;

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);

    cin >> n, a.resize(n), p2 = n / 2;
    for (auto &i: a)cin >> i;
    sort(a.begin(), a.end());

    while (p1 < n / 2 and p2 < n) a[p1] * 2 <= a[p2] ? ++p1, ++p2, ++ans : ++p2;

    cout << n - ans << "\n";
}