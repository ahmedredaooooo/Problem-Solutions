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


void Solve() {
    set<char>s;
    string st;
    cin >> st;
    for (auto ch : st)
        s.insert(ch);
    if (s.size() % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
signed main() {
    sad;
//    freopen("Input.txt", "r", stdin);
//    Test
    Solve(), cout << el;

}
