//
// Created by ahmed on 06/07/2023.
//
/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

int h, w, mod = 1e9 + 7;
vector<vector<char>>grid;
vector<vector<int>>dp;

int add(int n, int m)
{
    return (n % mod + m % mod) % mod;
}

int Solve(int i, int j)
{

    int &ret = dp[i][j];
    if (~ret)
        return ret;
    else if (grid[i][j] == '#')
        return ret = 0;
    else if (i == h - 1 && j == w - 1)
        return ret = 1;
    else if (i < h - 1 && j < w - 1)
        return ret = add(Solve(i, j + 1), Solve(i + 1, j));
    else if (i == h - 1)
        return ret = Solve(i, j + 1);
    else if (j == w - 1)
        return ret = Solve(i + 1, j);

}

void Solve()
{
    cin >> h >> w;
    dp = vector<vector<int>>(h, vector<int>(w, -1));
    grid = vector<vector<char>>(h, vector<char>(w));
    for(auto & i : grid)
        for(auto & j : i)
            cin >> j;


    cout << Solve(0, 0);/*cout << "\n";
    for(auto & i : dp) {
        for (auto &j: i)
            cout << j << " ";
        cout << "\n";
    }*/
}

signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve(), cout << "\n";
    return 0;
}