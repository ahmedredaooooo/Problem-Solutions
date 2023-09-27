//
// Created by ahmed on 26/06/2023.
//
#include <bits/stdc++.h>
using namespace std;

typedef vector<vector<char>>Graph;
Graph grid(3, vector<char>(3)), EmptyGrid(3, vector<char>(3, '.'));

inline bool isThereARowOrColumnOrDiagonalFullOf_X_Or_O_(Graph &g)
{
    if (g[0][0] == g[0][1] && g[0][1] == g[0][2] && g[0][2] == 'X' ||
        g[1][0] == g[1][1] && g[1][1] == g[1][2] && g[1][2] == 'X' ||
        g[2][0] == g[2][1] && g[2][1] == g[2][2] && g[2][2] == 'X' ||
        g[0][0] == g[1][0] && g[1][0] == g[2][0] && g[2][0] == 'X' ||
        g[0][1] == g[1][1] && g[1][1] == g[2][1] && g[2][1] == 'X' ||
        g[0][2] == g[1][2] && g[1][2] == g[2][2] && g[2][2] == 'X' ||
        g[0][0] == g[1][1] && g[1][1] == g[2][2] && g[2][2] == 'X' ||
        g[0][2] == g[1][1] && g[1][1] == g[2][0] && g[2][0] == 'X')
        return 1;

    if (g[0][0] == g[0][1] && g[0][1] == g[0][2] && g[0][2] == 'O' ||
        g[1][0] == g[1][1] && g[1][1] == g[1][2] && g[1][2] == 'O' ||
        g[2][0] == g[2][1] && g[2][1] == g[2][2] && g[2][2] == 'O' ||
        g[0][0] == g[1][0] && g[1][0] == g[2][0] && g[2][0] == 'O' ||
        g[0][1] == g[1][1] && g[1][1] == g[2][1] && g[2][1] == 'O' ||
        g[0][2] == g[1][2] && g[1][2] == g[2][2] && g[2][2] == 'O' ||
        g[0][0] == g[1][1] && g[1][1] == g[2][2] && g[2][2] == 'O' ||
        g[0][2] == g[1][1] && g[1][1] == g[2][0] && g[2][0] == 'O')
        return 1;
    return 0;
}

string BFS() {        // 1 > x   , 2 > O;
    queue<pair<vector<vector<char>>, int>> q;
    q.push({EmptyGrid, 1});

    while (!q.empty())
    {
        Graph tmpGrid = q.front().first;
        int player = q.front().second;
        q.pop();

        bool flag = 1;


        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (tmpGrid[i][j] != grid[i][j])
                {
                    flag = 0;
                    i = 4;
                    break;
                }

        if (flag)
            return "yes";


        if (isThereARowOrColumnOrDiagonalFullOf_X_Or_O_(tmpGrid))
            continue;
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                if (tmpGrid[i][j] == '.')
                {
                    if (player == 1)
                        tmpGrid[i][j] = 'X';
                    else
                        tmpGrid[i][j] = 'O';
                    if (grid[i][j] == tmpGrid[i][j])
                    {
                        if (player == 1)
                            q.push({tmpGrid, 2});
                        else
                            q.push({tmpGrid, 1});
                    }
                    tmpGrid[i][j] = '.';
                }
    }
    return "no";
}

void Solve()
{
    for(auto & i : grid)    for(auto & j : i)   cin >> j;

    cout << BFS();
}

signed main()
{
    int t;cin >> t;
    while (t--) Solve(), cout << '\n';
}