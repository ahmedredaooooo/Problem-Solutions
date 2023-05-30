
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

stack<int>stk;

void Solve() {

    int ch;
    cin >> ch;
    if (ch == 1)
        cin >> n, stk.push(n);
    else if (ch == 2 and !stk.empty())
        stk.pop();
    else if (ch == 3 and !stk.empty()) {
        cout << stk.top() << "\n";
    }
    else if (ch == 3 and stk.empty())
        cout << "Empty!\n";


}
signed main() {
    sad;
  Test
     Solve();

}
