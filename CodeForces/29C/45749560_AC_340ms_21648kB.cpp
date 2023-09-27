#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#define fastIO 1;
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
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
vector<bool> vis;
unordered_map<LL, LL> dehash, hash;
void DFS(int node)
{
    cout << dehash[node] << " ";
    vis[node] = true;
    for(auto & child : adj[node])
        if (!vis[child])
            DFS(child);
}

void Solve()
{
    int n;cin >> n;
    adj.assign(n + 2, vector<int>());
    vis.assign(n + 2, false);
    unordered_map<LL, int> hash;
    hash = unordered_map<LL, LL>();

int leaf = 0;
    for (int i = 0, u, v; i < n; ++i) {
        cin >> u >> v;
        if (!hash.count(u))
            hash[u] = hash.size() + 1, dehash[hash.size()] = u;
        if (!hash.count(v))
            hash[v] = hash.size() + 1, dehash[hash.size()] = v;
        u = hash[u], v = hash[v];
        adj[u].push_back(v), adj[v].push_back(u);
    }
    for(int i = 1; i <= n; ++i)
        if (adj[i].size() == 1)
            leaf = i;

    DFS(leaf);
}

signed main()
{
    fastIO

    Solve(), cout << '\n';

    return 0;
}
