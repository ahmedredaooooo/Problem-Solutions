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
    int n;
    cin >> n;
    map<int, int> frq, frqOfFrqs;
    while (n--) {
        int op, x;
        cin >> op >> x;
        if (op == 1) {
            if (frqOfFrqs[frq[x]] > 0) {
                frqOfFrqs[frq[x]]--;
            }
            frq[x]++;
            frqOfFrqs[frq[x]]++;
        } else if (op == 2) {
            if (frqOfFrqs[frq[x]] > 0) {
                frqOfFrqs[frq[x]]--;
            }
            if (frq[x] > 0) {
                frq[x]--;
            }
            frqOfFrqs[frq[x]]++;
        } else { cout <<( frqOfFrqs.count(x) && frqOfFrqs[x] > 0) << el; }
    }
}
signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;
}
