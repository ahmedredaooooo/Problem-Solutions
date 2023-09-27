#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define ll LL
#define Test ll tc; cin >> tc; while(tc--)



void Solve()
{
    int n;cin >> n;
    vector<vector<int>>grid(n, vector<int>(n));

    for(auto &__ : grid)
        for (auto &_: __)
            cin >> _;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (grid[i][j] != grid[j][i] || grid[i][j] && i == j)// if not symmetric then it's undirected
                return void(cout << "NO");

    cout << "YES";
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
