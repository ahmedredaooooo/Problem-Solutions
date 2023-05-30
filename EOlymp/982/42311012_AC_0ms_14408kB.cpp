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

typedef vector<vector<int>>GRAPH;

void addUndirectesEdge(GRAPH &g, int from, int to)
{
	g[from].push_back(to);
	g[to].push_back(from);
}

void DFS(GRAPH g, int node, unordered_set<int>&visited)
{
	visited.insert(node);
	for (auto neighbour : g[node])
		if (!visited.count(neighbour))
			DFS(g, neighbour, visited);
}

void Solve()
{
	int nodes, edges;
	cin >> nodes >> edges;
	GRAPH g(105);
	for (int e = 0; e < edges; ++e)
	{
		int from, to;
		cin >> from >> to;
		addUndirectesEdge(g, from, to);
	}

	unordered_set<int>ans;
	DFS(g, 1, ans);
	ans.size() == nodes ? cout << "YES" : cout << "NO";
}

signed main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

	Solve(), cout << "\n";
	return 0;
}

