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
    int i, j, m, n;
    int c, ans = 0;
    cin >> n >> m;
    vector<int> a(n);
    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(all(a));
    for (i = n - 1, c = 0, j = 0; i >= 0; --i) {
        if (j == 0) {
            ++c;
        }
        ans += c * a[i];
        if (++j == m) {
            j = 0;
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
