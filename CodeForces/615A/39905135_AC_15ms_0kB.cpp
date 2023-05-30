#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    int n, m, x, b;

    cin >> n >> m;
    set<int> st;

    for (int i = 0; i < n; i++) {
        cin >> x;
        for (int j = 0; j < x; j++) {
            cin >> b;
            st.insert(b);
        }
    }

    if (st.size() == m)
        cout << "YES\n";
    else
        cout << "No\n";
}