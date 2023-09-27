#include <bits/stdc++.h>
using namespace std;

#define Test int tc;cin >> tc;while(tc--)

int n, m, k, c;
vector<vector<char>> grid;
vector<vector<int>> vis;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

bool isValid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == '.' && !vis[i][j] && k;
}

void dfs(int i, int j)
{

    vis[i][j] = 1;
    for (int k = 0, newI, newJ; k < 4; ++k)
    {
        newI = i + dx[k], newJ = j + dy[k];
        if (isValid(newI, newJ))
            dfs(newI, newJ);
    }
    if (k)
        k--, grid[i][j] = 'X';
}

void Solve()
{
    cin >> n >> m >> k;
    grid = vector<vector<char>>(n, vector<char>(m));
    vis = vector<vector<int>>(n, vector<int>(m));

    for(auto &__ : grid)
        for(auto &_ : __)
            cin >> _, c += _ == '.';

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (isValid(i, j))
                dfs(i, j);
    for(auto &__ : grid)
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