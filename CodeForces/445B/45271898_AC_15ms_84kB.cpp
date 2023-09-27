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

inline int dfs(int node)
{
    vis[node] = 1;
    int tmp = 0;
    for(auto child : adj[node])
        if (!vis[child])
            tmp += 1 + dfs(child);
    return tmp;
}

inline LL fastPowerIter(LL b, LL p, LL m)
{
    LL r = 1;
    while (p)
    {
        if (p & 1)
            r  = r * b;
        b = b * b;
        p /= 2;
    }
    return r;
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
    for (int i = 0; i < n; ++i) if (!vis[i]) c += dfs(i);

    cout << fastPowerIter(2, c, 0);

}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}
