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
    set<int>st;
int n, m, x;
cin >> n >> m;
    for (int i = 0; i < n+m; ++i) {
        cin >> x;
        st.insert(x);
    }

    cout << m + n - st.size();
}
signed main() {
    sad;
//    freopen("Input.txt", "r", stdin);
    Test
    Solve(), cout << el;

}
