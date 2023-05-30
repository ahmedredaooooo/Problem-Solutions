#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; cin >> TC; while(TC--)
int nodes, edges, head, c;
vector<vector<int>>g;
vector<bool>vis;

void dfs(int node)
{
	vis[node] = 1;
	for (int sub : g[node])
		if (!vis[sub])
			dfs(sub);

}

void Solve()
{
	cin >> nodes >> edges;
	g.resize(nodes + 1);
	vis.resize(nodes + 1);
	for (int i = 0; i < edges; ++i)
	{
		int from, to;
		cin >> from >> to;
		g[from].push_back(to);
		g[to].push_back(from);
	}
	// cin >> head;

	for (int i = 0; i < nodes; ++i)
	{

		if (!vis[i]) {
			dfs(i);
			c++;
		}
	}

	cout << c - 1;

}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

	Solve(), cout << "\n";
	return 0;
}

