/*                                                    لا اله الا الله محمد رسول الله                                                            */
#include "bits/stdc++.h"
using namespace std;


int n, k, q, l, r, a, b, tmp;
vector<int>arr(2e5+5);

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    cin >> n >> k >> q;
    while (n--)cin >> a >> b, arr[a]++, arr[b + 1]--;
    partial_sum(arr.begin(), arr.end(), arr.begin());
    for (int i = 0; i < 2e5 + 2; ++i) {
        arr[i] < k ? arr[i] = 0 : arr[i] = 1;
    }
    partial_sum(arr.begin(), arr.end(), arr.begin());
    while (q--) {
        tmp = 0;
        cin >> l >> r;
        cout << arr[r] - arr[l - 1] << "\n";
    }
}