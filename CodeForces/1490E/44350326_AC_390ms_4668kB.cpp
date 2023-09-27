#include <bits/stdc++.h>
using namespace std;

void Solve()
{
    long long sum = 0;
    int n, startIdx = -1;cin >> n;
    vector<pair<int, int>>v(n);
    vector<int>ans;
    for (int i = 0; i < n; ++i)
        cin >> v[i].first, v[i].second = i + 1;
    sort(v.begin(), v.end());
v.push_back({0, -50});
    for (int i = 0; i < n; ++i)
    {
        if (v[i].first + sum >= v[i + 1].first)
        {
            if (!~startIdx)startIdx = i;
        }
        else startIdx = -1;
        sum += v[i].first;
    }

    for (int i = startIdx; i < n; ++i) ans.push_back(v[i].second);
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto i : ans)cout << i << ' ';

}

signed main()
{
    int t;cin >> t;
    while (t--)
        Solve(), cout << "\n";
}