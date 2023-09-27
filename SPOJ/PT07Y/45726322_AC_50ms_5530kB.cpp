#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int>vis;
bool cycle;
int ret;
void DFS(int node, int pr)
{
    vis[node] = 1;
    ret++;
    for(auto child : adj[node])
        if (!vis[child])
            DFS(child, node);
        else if (pr != child)
            cycle = 1;
}

void Solve()
{
    int n, m;cin >> n >> m;
    adj = vector<vector<int>>(n + 1);
    vis = vector<int>(n + 1);

    for (int i = 0, u, v; i < m; ++i)
        cin >> u >> v,
                adj[u].push_back(v), adj[v].push_back(u);
                
    DFS(1, -1);
    cout << (ret == n && !cycle && n == m + 1 ? "YES" : "NO"); // IK that 2 is enough
  

}

signed main()
{

    Solve(), cout << '\n';

    return 0;
}
