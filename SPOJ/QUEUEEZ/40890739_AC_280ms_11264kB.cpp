
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

queue<int>qu;

void Solve() {

    int ch;
    cin >> ch;
    if (ch == 1)
        cin >> n, qu.push(n);
    else if (ch == 2 and !qu.empty())
        qu.pop();
    else if (ch == 3 and !qu.empty()) {
        cout << qu.front() << "\n";
    }
    else if (ch == 3 and qu.empty())
        cout << "Empty!\n";


}
signed main() {
    sad;
  Test
     Solve();

}
