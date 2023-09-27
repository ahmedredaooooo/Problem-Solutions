#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

int n, m, k, numOfTurned;
vector<vector<char>> grid;
vector<vector<bool>> vis;
vector<tuple<int, int, int>>cellInComponentAndSize;

short dx[] = {0, 0, -1, 1};
short dy[] = {-1, 1, 0, 0};

bool isValid(int x, int y)
{
    return 0 <= x && x < n && 0 <= y && y < m && grid[x][y] == '.' && !vis[x][y];
}

bool ocean(int i, int j)
{
    return !i || !j || i == n - 1 || j == m - 1;
}
pair<int, bool> c;
//  num   ocean
pair<int, bool> dfs(int i, int j, bool turnToLand)
{
    vis[i][j] = 1;
    if (turnToLand) grid[i][j] = '*';
    for (int l = 0, newI, newJ; l < 4; ++l)
    {
        newI = i + dx[l], newJ = j + dy[l];
        if (isValid(newI, newJ))
            c.first = 1 + dfs(newI, newJ, turnToLand).first, c.second |= ocean(newI, newJ);
    }
    return c;
}



void Solve()
{
    cin >> n >> m >> k;
    vis.assign(n, vector<bool>(m));
    grid.assign(n, vector<char>(m));
    for(auto &__ : grid)
        for(auto &_ : __)
            cin >> _;

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (isValid(i, j))
            {
                c = {1, ocean(i, j)};
                auto t = dfs(i, j, 0);
                if (!t.second)
                    cellInComponentAndSize.emplace_back(t.first, i, j);
            }



    vis.assign(n, vector<bool>(m));
    sort(rallc(cellInComponentAndSize));
    while (cellInComponentAndSize.size() > k)
    {
        numOfTurned += get<0>(cellInComponentAndSize.back());
        dfs(get<1>(cellInComponentAndSize.back()), get<2>(cellInComponentAndSize.back()), 1);
        cellInComponentAndSize.pop_back();
    }

    cout << numOfTurned << '\n';
    for(auto __ : grid)
    {
        for (auto _: __)
            cout << _;
        cout << '\n';
    }

}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}
