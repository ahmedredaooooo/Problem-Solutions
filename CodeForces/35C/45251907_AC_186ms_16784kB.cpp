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
//#define int LL
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)





void bfs()
{
    int dx[] = {0, 0, -1, 1};
    int dy[] = {1, -1, 0, 0};

    int n, m, k;cin >> n >> m >> k;
    vector<vector<int>> vis(n, vector<int>(m));
    queue<pair<int, int>> q;

    auto isValid = [&](int i, int j)
            {return 0 <= i && 0 <= j && i < n && j < m && !vis[i][j];};


    for (int i = 0, x, y; i < k; ++i)
        cin >> x >> y, x--, y--, q.emplace(x, y), vis[x][y] = 1;

    auto ans = q.back();

    while (!q.empty())
    {
        auto node = q.front();
        for (int i = 0; i < 4; ++i)
        {
            int newI = node.first + dx[i], newJ = node.second + dy[i];
            if (isValid(newI, newJ))
                q.emplace(newI, newJ), vis[newI][newJ] = 1, ans = {newI, newJ};
        }
        q.pop();
    }
    cout << ++ans.first << " " << ++ans.second;
}


void Solve()
{
    bfs();
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
    FileI(input.txt) FileO(output.txt)
    Solve(), cout << '\n';

    return 0;
}
