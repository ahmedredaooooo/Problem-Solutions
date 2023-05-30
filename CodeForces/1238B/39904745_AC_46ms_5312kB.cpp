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
        int n, r, x;
        cin >> n >> r;
        vector<int> v;
        for(int i = 0; i< n; i++)
        {
            cin >> x;
            if(!mp[x])
                v.push_back(x);
            mp[x]++;
        }

        sort(v.begin(), v.end());
        int ans = 0;
        int cum = 0;
        for(int i = v.size()-1; i >= 0; i--)
        {
            if(v[i] - cum > 0)
            {
                ans++;
                cum += r;
            }
        }
        cout << ans << "\n";
    }

}
