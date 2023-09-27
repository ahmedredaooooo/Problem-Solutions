/*                                                    لَا إلَهَ إلاَّ اللَّهُ مُحَمَّدٌ رَسُولُ اللَّهِ                                                   */
#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define ld long double
#define LL long long
#define int LL
#define allc(x) x.begin(), x.end()

#define Test int TC; cin >> TC; while(TC--)

bool isValid(int x, int y)
{
    return 1 <= x && x <= 8 && 1 <= y && y <= 8;
}

int dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int dy[] = {2,-2, 1, -1, 2, -2, 1, -1};


//vector<vector<int>>grid(12, vector<int>(12));

vector<vector<int>>vis, level;


int bfs(int xSource, int ySource, int xDestination, int yDestination)
{
    queue<pair<int , int>>q;
    q.push({xSource, ySource});
    vis[xSource][ySource] = 1;
    level[xSource][ySource] = 0;

    while (!q.empty())
    {
        xSource = q.front().first, ySource = q.front().second;
        q.pop();
        for (int k = 0; k < 8; ++k)
        {
            int tx = dx[k] + xSource, ty = dy[k] + ySource;
            if (isValid(tx, ty) && !vis[tx][ty])
            {
                level[tx][ty] = level[xSource][ySource] + 1;
                vis[tx][ty] = 1;
                q.push({tx, ty});
            }
        }
        if (vis[xDestination][yDestination])
            break;
    }
    return level[xDestination][yDestination];
}

void Solve()
{


    string s1, s2;
    int xSource, ySource, xDestination, yDestination;
    while (cin >> s1 >> s2)
    {
        vis = level = vector<vector<int>>(9, vector<int>(9));
        xSource = s1[0] - 'a' + 1;
        ySource = s1[1] - '0';

        xDestination = s2[0] - 'a' + 1;
        yDestination = s2[1] - '0';

        cout << "To get from "<< s1 <<" to " << s2 <<" takes "<< bfs(xSource, ySource, xDestination, yDestination) << " knight moves.\n";
    }

    

}

signed main()
{
//    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
    Solve()/*, cout << "\n"*/;
    return 0;
}

