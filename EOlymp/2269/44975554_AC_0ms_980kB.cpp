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

void Solve()
{
    int n, c = 0;cin >> n;
    adj = vector<vector<int>>(n);
    vis = vector<int>(n);

    for (int i = 0; i < n; ++i)
        for (int j = 0, x; j < n; ++j)
        {
            cin >> x;
            if (x)
                adj[i].push_back(j), adj[j].push_back(i);
        }

    for (int i = 0; i < n; ++i)
        if (!vis[i])
            dfs(i), ++c;
    cout << c;
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}