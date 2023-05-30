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
    int t, op, val;
    cin >> t;
    queue<int> q;
    priority_queue<int> pq;
    while (t--) {
        cin >> op;
        if (op == 1) {
            cin >> val;
            q.push(val);
        } else if (op == 2) {
            if (pq.empty()) {
                cout << q.front() << el;
                q.pop();
            } else {
                cout << -1 * pq.top() << el;
                pq.pop();
            }
        } else if (op == 3) {
            while (!q.empty()) {
                pq.push(-1 * q.front());
                q.pop();
            }
        }
    }
}
signed main() {
    sad;
//    FILE
//    Test
    Solve(), cout << el;

}
