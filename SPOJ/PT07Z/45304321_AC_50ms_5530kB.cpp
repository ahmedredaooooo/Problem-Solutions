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

int n, m, test;
vector<vector<int>> adj;
vector<int> vis;


pair<int, int> BFS(int node)
{
    queue<int> q;q.push(node);
    vector<int>level(n);
    level[node] = 0;
    vis[node] = ++test;

    while (!q.empty())
    {
        node = q.front();q.pop();
        for(auto child : adj[node])
            if (vis[child] != test)
                q.push(child), vis[child] = test, level[child] = level[node] + 1;

    }
    return make_pair(*max_element(allc(level)), node);
}

/// I'll save the leaf nodes (1)   bfs from each of them and make levels   (2)     save the maximum level of them;     ("time limit solution")

/// if i do bfs from any node I'll get the node in the last level and this node is the start of longest way between 2 nodes
/// then i do bfs from it then the maxLevel is the anwer



void Solve()
{
    cin >> n;m = n - 1;
    adj = vector<vector<int>>(n);
    vis = vector<int>(n);
    while (m--)
    {
        int u, v;cin >> u >> v;
        u--, --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }


    auto t = BFS(1);

    cout << BFS(t.second).first;;
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}


/*
Input
13
1 2
8 6
7 6
1 6
1 3
3 4
3 5
2 12
12 13
12 11
11 9
9 10
Output
7
 **/