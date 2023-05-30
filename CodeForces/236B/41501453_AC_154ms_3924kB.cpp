/*                                                    لا اله الا الله محمد رسول الله                                                            */
#include "bits/stdc++.h"
using namespace std;

int a, b, c, ans, mod = 2e30;
vector<int>store(1000006);
int numOfDivisors(int n) {
    int c = 0;
    for (int i = 1; i*i <= n; ++i)
        if (n % i == 0) n / i == i ? c++ : c += 2;
    return c;
}

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);

    cin >> a >> b >> c;

    for (int i = 1; i <= a; ++i) for (int j = 1; j <= b; ++j) for (int k = 1; k <= c; ++k) ++store[i * j * k];

    for (int i = 1; i <= 1000006; ++i)
        store[i] ? ans > mod ? ans = (ans % mod + store[i] * numOfDivisors(i) % mod) % mod : ans += store[i] *
                                                                                                    numOfDivisors(i)
                 : 0;

    cout << ans;
}
