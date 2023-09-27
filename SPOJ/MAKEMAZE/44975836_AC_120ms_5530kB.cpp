#include <bits/stdc++.h>
using namespace std;

#define Test int tc;cin >> tc;while(tc--)

int n, m;
vector<vector<char>> grid;
vector<vector<int>> vis;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.';
}

void dfs(int i, int j)
{
    vis[i][j] = 1;
    for (int k = 0, newI, newJ; k < 4; ++k)
    {
        newI = i + dx[k], newJ = j + dy[k];
        if (isValid(newI, newJ) && !vis[newI][newJ])
            dfs(newI, newJ);
    }
}

void Solve()
{
    cin >> n >> m;
    grid = vector<vector<char>>(n, vector<char>(m));
    vis = vector<vector<int>>(n, vector<int>(m));

    vector<pair<int, int>>openingEdges;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cin >> grid[i][j];
            if (grid[i][j] == '.' && (!i || i == n - 1 || !j || j == m - 1))
                openingEdges.push_back({i, j});
        }

    if (openingEdges.size() != 2)
        return cout << "invalid", void();

    dfs(openingEdges[0].first, openingEdges[0].second);

    if (!vis[openingEdges[1].first][openingEdges[1].second])
        return cout << "invalid", void();

    cout << "valid";

}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Test Solve(), cout << "\n";
    return 0;
}