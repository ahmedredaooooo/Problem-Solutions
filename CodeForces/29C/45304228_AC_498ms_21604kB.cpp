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
vector<vector<int>> adj;
vector<int> vis;


map<int, int>Hash, deHash;
int tmp = 0;
int getHash(int n)
{
    if (Hash.count(n))
        return Hash[n];
    deHash[tmp] = n;
    return Hash[n] = tmp++;

}

int getDeHash(int n)
{
    return deHash[n];
}

void dfs(int node)
{
    vis[node] = 1;
    cout << getDeHash(node) << " ";
    for(auto child : adj[node])
        if (!vis[child])
            dfs(child);
}

void Solve()
{
    cin >> n;m = n;
    adj = vector<vector<int>>(n + 1);
    vis = vector<int>(n + 1);
    while (m--)
    {
        int u, v;cin >> u >> v;
        u = getHash(u), v = getHash(v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i < n; ++i)
        if (adj[i].size() == 1)
            return dfs(i), void();

}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}

