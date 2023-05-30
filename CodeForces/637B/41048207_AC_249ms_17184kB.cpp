/*                                                     لا اله الا الله محمد رسول الله                                              */
#include <bits/stdc++.h>

using namespace std;
#define sad ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define el '\n'
#define all(x) x.begin(), x.end()
#define LL  long long
#define int LL
#define ld long double
#define un unsigned
#define Test unsigned int TC; cin >> TC; while(TC--)
#define sz(s) int(s.size())
#define NO cout<<"NO";
#define YES cout<<"YES";
#define FILE freopen("Input.txt", "r", stdin);

stack<string>stk;
map<string, int>mp;
void Solve() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        stk.push(s);
    }
    while (stk.size()) {
        if (!mp[stk.top()])
            mp[stk.top()]++,
                    cout << stk.top() << el;

        stk.pop();
    }
}
signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;

}
