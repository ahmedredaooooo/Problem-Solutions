/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define rallc(x) x.rbegin(), x.rend()

#define Test int TC; cin >> TC; while(TC--)

vector<vector<int>>adj;
vector<int>vis;
vector<int>ans;

void dfs(int node)
{
    vis[node] = 1;

    for(auto child : adj[node])
        if (!vis[child])
            dfs(child);

    ans.push_back(node);
}

    int n, m;
void Solve()
{


    adj = vector<vector<int>>(n+1);
    vis = vector<int>(n+1);
    ans = vector<int>();

    while (m--)
    {
        int from, to;
        cin >> from >> to;
        adj[from].push_back(to);
    }
    for (int i = 1; i <= n; ++i)
        if (!vis[i])
            dfs(i);

    reverse(rallc(ans));
    for(auto & i : ans)
        cout << i << " ";
}


signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
     while(cin >> n >> m && n) Solve(), cout << "\n";
    return 0;
}

