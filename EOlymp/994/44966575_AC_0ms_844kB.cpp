#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define ll LL
#define Test LL tc; cin >> tc; while(tc--)



void Solve()
{
    int n, c = 0;cin >> n;
    vector<vector<int>>grid(n, vector<int>(n));
    vector<int>colors(n);

    for(auto &__ : grid)
        for(auto &_ : __)
            cin >> _;

    for(auto &_ : colors)
        cin >> _;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (colors[i] != colors[j])
                c += grid[i][j];
    cout << c / 2;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
