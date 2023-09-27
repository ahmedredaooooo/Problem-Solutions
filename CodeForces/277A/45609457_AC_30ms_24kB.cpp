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
#define int short
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

struct DSU
{
    vector<LL> parent, depth;
    vector<vector<LL>> cmp;
    LL forest;
    DSU (size_t n)
    {
        parent = depth = vector<LL>(n);
        cmp = vector<vector<LL>>(n);
        for (int i = 0; i < n; i++)
            parent[i] = i, cmp[i] = {i};
        forest = n;
    }

    LL findSet(int u)
    {
        if (parent[u] == u)
            return u;
        return parent[u] = findSet(parent[u]);
    }

    bool unionSet(int u, int v)
    {
        u = findSet(u), v = findSet(v);

        if (u == v)
            return false;

        forest--;
        if (depth[u] > depth[v])
            swap(u, v);
        parent[u] = v;
        if (depth[u] == depth[v])
            depth[v]++;

//        for (auto& x : cmp[u])
//            cmp[v].push_back(x);

        return true;
    }
};

vector<vector<bool>> language;

void Solve()
{
    int n, m, c0 = 0;cin >> n >> m;
    language.assign(n, vector<bool>(m));
    DSU dsu(n);
    for (int i = 0, k, u; i < n; ++i)
    {
        cin >> k;
        c0 += !k;
        while (k--)
            cin >> u, language[i][--u] = true;
    }

    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            for (int k = 0; k < m; ++k)
                if (language[i][k] && language[j][k] && dsu.unionSet(i, j))
                    break;

    cout << (c0 == n ? n : --dsu.forest);

}


signed main()
{
    fastIO

    Solve(), cout << '\n';

    return 0;
}
