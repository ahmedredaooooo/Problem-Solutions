/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())

const ll MOD = 1e9 + 7;


int main() {
    int n;
    cin >> n;
    int p, q, x;
    set<int>s;
    cin >> p;
    for (int i = 0; i < p; ++i) {
        cin >> x;
        s.insert(x);
    }
    cin >> q;
    for (int i = 0;i < q;++i)
    {
        cin >> x;
        s.insert(x);
    }
    cout << (s.size() == n ? "I become the guy." : "Oh, my keyboard!");
}
