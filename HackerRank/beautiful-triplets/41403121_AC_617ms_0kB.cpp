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
int ans;
void Solve() {
    int n, d;cin >> n >> d;
    vector<int>v(n);
    for(auto &i:v)cin >> i;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (v[j]-v[i] == d)
                for (int k = j+1; k < n; ++k) {
                    if (v[k] - v[j] == d)ans++;
                }
        }
    }
    cout<<ans;
}
signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;
}
