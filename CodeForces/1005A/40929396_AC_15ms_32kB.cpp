
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
    int n;
    cin >> n;
    vector<int>v(n),ans;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (i>0) {
            if (v[i] <= v[i - 1]) {
                ans.push_back(v[i-1]);
            }
        }
    }
    cout<<ans.size()+1 << el;
    for (int i = 0; i <ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << v[n-1];
}
signed main() {
    sad;
//    Test
        Solve(), cout << el;

}
