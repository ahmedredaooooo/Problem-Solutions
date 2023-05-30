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
#define allc(x) x.begin(), x.end()
#define rallc(x) x.rbegin(), x.rend()
#define all(x,i,j) x.begin() + i, x.begin() + j
#define Test int TC; cin >> TC; while(TC--)

bool check()
{

}

void generate(int idx = 1)
{

}
int startX, startY;
int c;
string awamer;
vector<vector<char>>v;
void Solve()
{
int n, m;cin >> n >> m;
v = vector<vector<char>>(103, vector<char>(103, '#'));
    for (int i = 0+51; i < n+51; ++i)
        for (int j = 0+51; j < m+51; ++j)
        {
            cin >> v[i][j];
            if (v[i][j] == 'S')     startX = i, startY = j;
        }
cin >> awamer;
//    debug(v);

vector<int>directions = {0, 1, 2, 3};
    do
    {
        int stX = startX, stY = startY;
        for (int i = 0; i < awamer.size(); ++i)
        {

            if (directions[awamer[i] - '0'] == 0) stX++;
            else if (directions[awamer[i]- '0'] == 1) stX--;
            else if (directions[awamer[i] - '0'] == 2) stY++;
            else if (directions[awamer[i] - '0'] == 3) stY--;

        if (v[stX][stY] == 'E') {c++;break;};
            if (v[stX][stY] == '#' || v[stX][stY] == ' ') break;
        }
    //check


    } while (next_permutation(allc(directions)));
    cout << c;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);

    Solve();
    return 0;
}