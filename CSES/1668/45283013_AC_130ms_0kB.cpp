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

//enum team{team1 = 1, team2 = -1};
vector<bool>vis, teamo;
int n, m;
vector<vector<int>>adj;
void dfs(int node, int team)
{
    vis[node] = 1;
    teamo[node] = team;
    for(auto child : adj[node])
        if (!vis[child])
            dfs(child, !team);
}

void fun()
{
    for (int i = 0; i < n; ++i)
        for(auto child : adj[i])
            if (teamo[child] == teamo[i])
            {
                cout << "IMPOSSIBLE";
                exit(0);
            }
}

void Solve()
{
    cin >> n >> m;
    vis = teamo = vector<bool>(n);
    adj = vector<vector<int>>(n);

    while (m--)
    {
        int u, v;cin >> u >> v;u--, v--;
        adj[u].push_back(v), adj[v].push_back(u);
    }
    for (int i = 0; i < n; ++i)
        if (!vis[i])
            dfs(i, 0);

    fun();

    for(auto _ : teamo)  cout << 1 + (int)_ << " ";


}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}
