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


void Solve() {
    string a("qwertyuiopasdfghjkl;zxcvbnm,./"), s, ans = "";
    char ch;
    cin >> ch >> s;
    if (ch == 'R') {
        for (int i = 0; i < s.size(); ++i)
            for (int j = 0; j < a.size(); ++j)
                if (a[j] == s[i]) {
                    ans += a[j - 1];
                    break;
                }
    }
    else {
        for (int i = 0; i < s.size(); ++i)
            for (int j = 0; j < a.size(); ++j)
                if (a[j] == s[i]) {
                    ans += a[j + 1];
                    break;
                }
    }
    cout << ans;
}
signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;

}
