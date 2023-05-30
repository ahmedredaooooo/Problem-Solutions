#include <bits/stdc++.h>
using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)

int main() {
    sad
    int t;
    cin >> t;
    while(t--)
    {
        map<int, int> mp;
        int ans = 0;
        int n, m, x;
        cin >> n >> m;
        while(n--)
        {
            cin >> x;
            mp[x]++;
        }
        while(m--)
        {
            cin >> x;
            if(mp[x])
                ans++;
        }
        cout << ans << "\n";
    }
}
