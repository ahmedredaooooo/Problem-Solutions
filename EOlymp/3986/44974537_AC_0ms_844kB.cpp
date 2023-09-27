#include <bits/stdc++.h>
using namespace std;



void Solve()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    set<int> sources, sinks;
                    /// if a complete row is full of 0s then the node is sink ;  if a complete column is full of 0s then the node is source
    for (auto &__: grid)
        for (auto &_: __)
            cin >> _;

    for (int i = 0, col = 0, row = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            row += grid[i][j], col += grid[j][i];

        if (!row)
            sinks.insert(i + 1);
        if (!col)
            sources.insert(i + 1);
        col = row = 0;
    }
    cout << sources.size() << " ";
    for (auto _: sources) cout << _ << " ";cout << "\n";

    cout << sinks.size() << " ";
    for (auto _: sinks) cout << _ << " ";
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
