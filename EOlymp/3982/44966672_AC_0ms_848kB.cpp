#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define ll LL
#define Test LL tc; cin >> tc; while(tc--)



void Solve()
{
    int n;cin >> n;
    vector<vector<int>>grid(n, vector<int>(n)), adj(n);
    for (int i = 0, x; i < n; ++i)
    {
        cin >> x;
        for (int j = 0, u; j < x; ++j)
            cin >> u, grid[i][u - 1] = 1;
    }
    for(auto &__ : grid)
    {
        for (auto &_: __)
            cout << _ << " ";
        cout << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
