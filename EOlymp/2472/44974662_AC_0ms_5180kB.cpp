#include <bits/stdc++.h>
using namespace std;



void Solve()
{
    int n, q;cin >> n >> q;
    vector<vector<int>>adj(n);

    while (q--)
    {
        int operation;cin >> operation;
        if (operation == 1)
        {
            int u, v;cin >> u >> v;
            u--, v--;
            adj[u].push_back(v), adj[v].push_back(u);
        }
        else
        {
            int v;cin >> v;v--;
            for(auto _ : adj[v])cout << ++_ << " ";
            cout << "\n";
        }
    }

}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
