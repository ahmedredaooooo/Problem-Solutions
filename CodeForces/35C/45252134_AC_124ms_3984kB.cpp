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
#define int short
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)




bool vis[2000][2000];
void bfs()
{
    short dx[] = {0, 0, -1, 1};
    short dy[] = {1, -1, 0, 0};

    short n, m, k;cin >> n >> m >> k;
    queue<pair<int, int>> q;

    auto isValid = [&](int i, int j)
            {return !vis[i][j] ? (0 <= i && 0 <= j && i < n && j < m) : 0;};
    
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
