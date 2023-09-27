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
//#define int short
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

int n, m;
unordered_map<int, vector<int>> adj;
unordered_map<int, bool> vis;


void dfs(int node)
{
    vis[node] = 1;
    cout << node << " ";
    for(auto child : adj[node])
        if (!vis[child])
            dfs(child);
}

void Solve()
{
    cin >> n;m = n;

    while (m--)
    {
        int u, v;cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(auto i : adj)
        if (i.second.size() == 1)
            return dfs(i.first), void();

}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}

