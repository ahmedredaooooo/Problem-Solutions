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
#define int int
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

typedef  vector<int> V;
vector<V>adj;
V vis, ans;

void DFS(int node)
{
    vis[node] = 1;
    for(auto child : adj[node]) if (!vis[child]) DFS(child), ans[child] = 1 + node;
}

void Solve()
{
    int n, r1, r2;cin >> n >> r1 >> r2;r1--, r2--;
    adj = vector<V>(n);
    vis = ans = V(n);

    for (int j = 0, x; j < n; ++j)
    {
        if (j == r1)continue;
        cin >> x;x--;
        adj[x].push_back(j);
        adj[j].push_back(x);
    }
    DFS(r2);
    for (int j = 0; j < n; ++j)
    {
        if (j == r2)continue;
        else cout << ans[j] << ' ';
    }
}

signed main()
{
    fastIO

    Solve(), cout << '\n';

    return 0;
}
