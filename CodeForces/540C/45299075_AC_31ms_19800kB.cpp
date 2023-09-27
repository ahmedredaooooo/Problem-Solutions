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
#define int short
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

int n, m;
vector<vector<char>> grid;
pair<int, int>starto, endo;


short dx[] = {0, 0, -1, 1};
short dy[] = {-1, 1, 0, 0};

bool isValid(int x, int y)
{
    return 0 <= x && x < n && 0 <= y && y < m;
}


void dfs(int i, int j)
{
    if (i == endo.first && j == endo.second && grid[i][j] != '.')  cout << "YES", exit(0);
    if (grid[i][j] != '.') return;
    grid[i][j] = 'X';

    for (int l = 0, newI, newJ; l < 4; ++l)
    {
        newI = i + dx[l], newJ = j + dy[l];
        if (isValid(newI, newJ))
             dfs(newI, newJ);
    }
}



void Solve()
{
    cin >> n >> m;
    grid.assign(n, vector<char>(m));
    for(auto &__ : grid)
        for(auto &_ : __)
            cin >> _;

    cin >> starto.first >> starto.second >> endo.first >> endo.second;
    endo.first--, endo.second--, starto.first--, starto.second--;

    grid[starto.first][starto.second] = '.';
    dfs(starto.first, starto.second);

    cout << "NO";


}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << '\n';

    return 0;
}
