#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<char>> grid;
int dp[1003][1003];
//vector<vector<int>>dp;
int mod = 1e9+7;
int Solve(int i, int j)
{
//    cout << i << " " << j << "   " << dp[i][j]<< "\n" ;
    if (i > n || j > m)
        return 0;
    if (i == n && j == m)
        return 1;
    if (~dp[i][j])
        return dp[i][j];

    int right = 0, down = 0;

    if (grid[i][j + 1] == '.')
        down = Solve(i, j + 1);
    if (grid[i + 1][j] == '.')
        right = Solve(i + 1, j);
    return dp[i][j] = (down % mod + right % mod) % mod;
}


signed main()
{
    cin >> n >> m;
    grid = vector<vector<char>>(n + 3, vector<char>(m + 3, '#'));
//    dp = vector<vector<int>>(n + 3, vector<int>(m + 3, -1));
    ::memset(dp, -1, sizeof dp);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> grid[i][j];
    cout << Solve(1, 1) << "\n";
//    for (int i = 1; i <= n + 1; ++i) {
//        {
//            for (int j = i; j <= m + 1; ++j)
//                cout << dp[i][j] << " ";
//        }
//        cout << "\n";
//    }
}