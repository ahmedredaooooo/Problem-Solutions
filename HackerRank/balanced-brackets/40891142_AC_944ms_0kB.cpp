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
    vector<char> dq;
    string s;
    cin >> s;
    bool good = 1;
    for (char i: s) {

        if (i == '{' || i == '(' || i == '[')
            dq.push_back(i);
        else {
            if (dq.empty()) {
                good = 0;
                break;
            }
            if (i == '}' and dq.back() == '{')
                dq.pop_back();
            else if (i == ']' and dq.back() == '[')
                dq.pop_back();
            else if (i == ')' and dq.back() == '(')
                dq.pop_back();
            else
                good = false;
        }
    }
    if (dq.empty() && good)
        cout << "YES\n";
    else
        cout << "NO\n";
}
signed main() {
    sad;
  Test
     Solve();

}
