#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define ll LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

vector<vector<int>>adj;
vector<int>vis;

            ///  white -> not visited at all,
            ///  grey -> mark the parent node with grey since it's the one i'm visiting it's children,       
            ///  black -> mark the parent node as black since u visited all it's children
enum {white, grey, black};

bool cycleDetectionUsing_DFS(int node)// if true then cyclic graph
{
    if (vis[node] == grey)
        return true;

    bool ret = false;

    vis[node] = grey;

    for(auto child : adj[node])
        if (vis[child] != black)
            ret |= cycleDetectionUsing_DFS(child);

    vis[node] = black;

    return ret;
}

void Solve()
{

    int n, m;cin >> n >> m;
    adj = vector<vector<int>>(n);
    vis = vector<int>(n, white);

    for (int i = 0; i < m; ++i)
    {
        int u, v;cin >> u >> v;
        adj[u].push_back(v);
    }

    for (int i = 0; i < n; ++i)
        if(cycleDetectionUsing_DFS(i))
            return void (cout << 1);
    cout << 0;
}


signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}

