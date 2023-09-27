#include <bits/stdc++.h>
using namespace std;

#define Test int tc;cin >> tc;while(tc--)

int n, m, k, c;
vector<vector<char>> grid;
vector<vector<int>> vis, lvl;
vector<vector<pair<int, int>>> group;


int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.' && !vis[i][j] && k;
}
int mx = -1;
void bfs(int i, int j)
{

    vis[i][j] = 1;
    //        lvl        x       y
    queue<pair<int, pair<int, int>>>q;
    q.push({0, {i, j}});
    group[0].emplace_back(i, j);

    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        for (int l = 0; l < 4; ++l)
        {
            int ii = dx[l] + tmp.second.first, jj = dy[l] + tmp.second.second;
            if (isValid(ii, jj))
            {
                q.push({tmp.first + 1, {ii, jj}}), vis[ii][jj] = 1, lvl[ii][jj] = tmp.first + 1;
                group[lvl[tmp.second.first][tmp.second.second] + 1].emplace_back(ii, jj);
                mx = max(mx, lvl[tmp.second.first][tmp.second.second] + 1);
            }
        }
    }
}

void Solve()
{
    cin >> n >> m >> k;
    grid = vector<vector<char>>(n, vector<char>(m));
    lvl = vis = vector<vector<int>>(n, vector<int>(m));
    group = vector<vector<pair<int, int>>>(500 * 502);

    for (auto &__: grid)
        for (auto &_: __)
            cin >> _, c += _ == '.';

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (isValid(i, j))
                bfs(i, j);

    while (k)
    {
        if (group[mx].size())
        {
            grid[group[mx].back().first][group[mx].back().second] = 'X';
            group[mx].pop_back();
            k--;
        } else
            mx--;
    }
    for (auto &__: grid)
    {
        for (auto &_: __)
            cout << _;
        cout << "\n";
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}
