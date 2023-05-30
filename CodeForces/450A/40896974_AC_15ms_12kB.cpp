
/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
int n, S, mxSize, currentSize = 0, nums = 0;
vector<pair<pair<string, int>, int>>ans;
vector<pair<pair<string, int>, int>>nameStrngthSize;

//cin >> n >> S;
//for (int i = 0; i < n; ++i)
//cin >> nameStrngthSize[i].first.first >> nameStrngthSize[i].first.second >> nameStrngthSize[i].second;


void Solve() {
    int n, m;
    cin >> n >> m;
    deque<pair<int, int>>v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        v[i].second = i+1;
    }
    int t;
    while (!v.empty()) {
        t = v.front().second;
        if (v.front().first - m <= 0) {
            v.pop_front();
        }
        else {
            v.push_back({v.front().first-m, v.front().second});
            v.pop_front();
        }
    }
    cout << t;
}
signed main() {
    sad;
//  Test
     Solve();

}
