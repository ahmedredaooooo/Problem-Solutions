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

// to , cost
int n, inf = 1e15;
vector<vector<pair<int, int>>> adj;
vector<int>distanc, pr;

void Solve()
{

    auto Dijkstra = [&](auto source, auto dist)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, source});
        distanc[pq.top().second] = pq.top().first;

        while (!pq.empty())
        {
            auto p = pq.top();pq.pop();
            for(auto [node, cost] : adj[p.second])
            {
                if (p.first + cost < distanc[node])
                {
                    distanc[node] = p.first + cost;
                    pr[node] = p.second;
                    pq.push({p.first + cost, node});
                }
            }
        }
        if (distanc[n] == inf)
            cout << -1, ::exit(0);
    };

    int m;cin >> n >> m;
    adj = vector<vector<pair<int, int>>>(n + 1);
    distanc = pr = vector<int>(n + 1, inf);

    for (int i = 0, u, v, c; i < m; ++i)
        cin >> u >> v >> c, adj[u].emplace_back(v, c), adj[v].emplace_back(u, c);

    Dijkstra(1, n);

    deque<int>dq = {n};
    while (dq.front() != 1)
        dq.push_front(pr[dq.front()]);
    for(auto _ : dq)cout << _ << " ";
}

signed main()
{
    fastIO;

    Solve(), cout << '\n';

    return 0;
}
