#include <bits/stdc++.h>
using namespace std;


void SolveAdjList()            /// Using adjacency list
{
    int n, m;cin >> n >> m;
    bool multiEdges = 0;
    vector<set<int>>adj(n);

    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v,--u, --v;
        if (adj[u].find(v) != adj[u].end())
            multiEdges = 1;
        adj[u].insert(v);
    }

    cout << (multiEdges ? "YES" : "NO");
}

void SolveMatrix()            /// Using adjacency matrix
{
    int n, m;cin >> n >> m;
    bool multiEdges = 0;
    vector<vector<int>>grid(n, vector<int>(n));


    for (int i = 0, u, v; i < m; ++i)
    {
        cin >> u >> v,--u, --v;
        if (grid[u][v])
            multiEdges = 1;
        grid[u][v]++;
    }

    cout << (multiEdges ? "YES" : "NO");
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    SolveMatrix(), cout << "\n";
    return 0;
}
