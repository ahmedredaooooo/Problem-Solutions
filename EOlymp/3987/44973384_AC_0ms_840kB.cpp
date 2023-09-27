#include <bits/stdc++.h>
using namespace std;


void SolveAdjList()            /// Using adjacency list
{
    int n, m;cin >> n >> m;
    vector<set<int>>adj(n);

    for (int i = 0, u, v; i < m; ++i)
        cin >> u >> v,--u, --v, adj[u].insert(v), adj[v].insert(u);

    for (int i = 0; i < n; ++i)
        if (adj[i].size() != n - 1)
            return void(cout << "NO");

    cout << "YES";
}

void SolveMatrix()            /// Using adjacency matrix
{
    int n, m;cin >> n >> m;
    vector<vector<int>>grid(n, vector<int>(n));


    for (int i = 0, u, v; i < m; ++i)
        cin >> u >> v,--u, --v, grid[u][v] = grid[v][u] = 1;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (i != j && !grid[i][j])
                return void(cout << "NO");

    cout << "YES";
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    SolveMatrix(), cout << "\n";
    return 0;
}
