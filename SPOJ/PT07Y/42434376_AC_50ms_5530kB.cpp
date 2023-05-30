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
int nodes, edges, head, c, r;
string path = "IEHOVA";

vector<vector<int>>g;
vector<bool>vis;

void addDirectedEdge(int from, int to)
{
	g[from].push_back(to);
}

void dfs(int node)
{
	vis[node] = 1;
	for (auto i : g[node])
		if (!vis[i])
			dfs(i);
}

void Solve()
{
	int n, m;
	cin >> n >> m;
	g.resize(n + 1);
	vis.resize(n + 1);
	for (int i = 0; i < m; ++i)
	{
		int from, to;
		cin >> from >> to;
		g[from].push_back(to);
		g[to].push_back(from);
	}

	int c = 0;
	dfs(1);
	for (int i = 1; i <= n; ++i)
		if (!vis[i])
			c++;

	if (!c && n == m + 1)
		cout << "YES";
	else cout << "NO";
}

signed main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
// Test
	Solve(), cout << "\n";
	return 0;
}

