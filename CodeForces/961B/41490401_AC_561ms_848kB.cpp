/*                                                    لا اله الا الله محمد رسول الله                                                            */
#include "bits/stdc++.h"
using namespace std;

long long n, k, ans, mx;
deque<long long>numOfTheories;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    cin >> n >> k;
    numOfTheories.resize(n);
    for (auto &i: numOfTheories)cin >> i;numOfTheories.push_front(0);
    for (int i = 1, x; i <= n; ++i)cin >> x,
    x?ans += numOfTheories[i], numOfTheories[i] = 0:0;

    partial_sum(numOfTheories.begin(), numOfTheories.end(), numOfTheories.begin());

    for (auto i: numOfTheories)     cerr << i << "\n";

    for (int i = 0; i + k <= n; ++i) mx = max(mx, numOfTheories[i + k] - numOfTheories[i]);

    cout << mx + ans << "\n";
}
