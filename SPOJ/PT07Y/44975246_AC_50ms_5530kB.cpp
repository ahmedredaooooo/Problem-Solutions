#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int>vis;

void dfs(int node)
{
    vis[node] = 1;
    for(auto child : adj[node])
        if (!vis[child])
            dfs(child);
}

void Solve()                        /// the graph is tree if all of it's nodes are connected (1 component) and the number of nodes = number of edges + 1  
{
    int n, m;cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<int>(n);
    
    for (int i = 0, u, v; i < m; ++i)
        cin >> u >> v,u--, v--,
        adj[u].push_back(v), adj[v].push_back(u);

    if (n != m + 1)
        return cout << "NO", void();
    
    dfs(0);
    for (int i = 0; i < n; ++i)
        if (!vis[i])
            return cout << "NO", void();

    cout << "YES";
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}