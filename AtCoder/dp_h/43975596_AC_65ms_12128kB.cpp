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

    if(i >= h || j >= w || i < 0 || j < 0 || grid[i][j] == '#')
        return 0;

    if (i == h - 1 && j == w - 1)
        return 1;

    int &ret = dp[i][j];
    if (~ret) return ret;

    ret = 0;
    ret = (Solve(i + 1, j) % mod + Solve(i, j + 1) % mod) % mod;

    return ret;
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