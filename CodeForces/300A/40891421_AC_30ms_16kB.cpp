
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
    int n, zero = 0, x;
    cin >> n;
    vector<int> pos, neg;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x == 0)zero++;
        else if (x > 0)
            pos.push_back(x);
        else
            neg.push_back(x);
    }
    cout << 1 << " " <<neg.back() << "\n";
    neg.pop_back();
    if (pos.size()) {
        cout << 1 << " " << pos.back() << "\n";
        pos.pop_back();
        cout << zero+pos.size()+neg.size();
        for (int i = 0; i < neg.size(); ++i) {
            cout << " " << neg[i];
        }
        while (zero--) {
            cout << " " << 0;
        }
        for (int i = 0; i < pos.size(); ++i) {
            cout << " " << pos[i];
        }
        cout << el;
    }
    else {
        cout << 2 << " " << neg.back();
        neg.pop_back();
        cout  << " " << neg.back() << "\n";
        neg.pop_back();
        cout << zero+pos.size()+neg.size();
        for (int i = 0; i < neg.size(); ++i) {
            cout << " " << neg[i];
        }
        while (zero--) {
            cout << " " << 0;
        }
        for (int i = 0; i < pos.size(); ++i) {
            cout << " " << pos[i];
        }
        cout << el;
    }
}
signed main() {
    sad;
//  Test
     Solve();

}
