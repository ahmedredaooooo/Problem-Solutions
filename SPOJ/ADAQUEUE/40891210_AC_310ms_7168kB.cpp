
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

deque<int>dq;
int i;
void Solve() {
    string s;
    cin >> s;
    if (s == "toFront" && i % 2 == 0) {
        int n;
        cin >> n;
        dq.push_front(n);
    } else if (s == "toFront" && i % 2 == 1) {
        int n;
        cin >> n;
        dq.push_back(n);
    } else if (s == "push_back" && i % 2 == 0) {
        int n;
        cin >> n;
        dq.push_back(n);
    } else if (s == "push_back" && i % 2 == 1) {
        int n;
        cin >> n;
        dq.push_front(n);
    } else if (s == "front" && !dq.empty() && i % 2 == 0) {
        cout << dq.front() << el;
        dq.pop_front();
    } else if (s == "back" && !dq.empty() && i % 2 == 0) {
        cout << dq.back() << el;
        dq.pop_back();
    } else if (s == "front" && !dq.empty() && i % 2 == 1) {
        cout << dq.back() << el;
        dq.pop_back();
    } else if (s == "back" && !dq.empty() && i % 2 == 1) {
        cout << dq.front() << el;
        dq.pop_front();
    } else if (s == "reverse") {
        i++;
    } else
        cout << "No job for Ada?\n";
}
signed main() {
    sad;
  Test
     Solve();

}
