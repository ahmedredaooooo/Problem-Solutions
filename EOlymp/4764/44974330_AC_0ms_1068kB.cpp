#include <bits/stdc++.h>
using namespace std;


void SolveAdjList()            /// Using adjacency list
{
    int n;cin >> n;

    vector<set<int>>adj(n);

    for (int i = 0; i < n; ++i)
        for (int j = 0, x; j < n; ++j)
        {
            cin >> x;
            if (x)
                adj[i].insert(j), adj[j].insert(i);
        }

    for (int i = 0; i < n; ++i)
        cout << adj[i].size() << "\n";
}

void SolveMatrix()            /// Using adjacency matrix
{
    int n;cin >> n;
    vector<vector<int>>grid(n, vector<int>(n));


    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> grid[i][j];


    for (int i = 0, tmpC = 0; i < n; ++i)
    {

        for (int j = 0; j < n; ++j)
            tmpC += grid[i][j];

        cout << tmpC << " ";tmpC = 0;
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    SolveAdjList(), cout << "\n";
    return 0;
}
