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

const LL mod = 1e9 + 7;
const int N = 1;
const ld pi = 3.14159265359;


void Solve() {
    int m, x, y, ans = -1;
    cin >> m >> x >> y;
    vector<int>a(x);
    vector<int>b(y);
    for (int i = 0; i < x; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < y; ++i) {
        cin >> b[i];
    }
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            if (a[i]+b[j]<=m)
                ans = max(ans, a[i]+b[j]);
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
