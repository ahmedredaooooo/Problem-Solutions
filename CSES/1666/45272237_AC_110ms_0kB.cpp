#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

vector<vector<int>> adj;
vector<int> vis;

inline void dfs(int node)
{
    vis[node] = 1;
    for(auto child : adj[node])
        if (!vis[child])
            dfs(child);
}



void Solve()
{
    int n, m, c = 0;cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<int>(n);
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        u--, v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> beginningNodeForAnyComponent;
    for (int i = 0; i < n; ++i) if (!vis[i]) beginningNodeForAnyComponent.push_back(i + 1),  dfs(i);

    cout << (c = beginningNodeForAnyComponent.size() - 1) << '\n';
    for (int i = 0; i < c; ++i)
        cout << beginningNodeForAnyComponent[i] << ' ' << beginningNodeForAnyComponent[i + 1] << '\n';


}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}
