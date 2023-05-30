#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
//#include "Debug.cpp"
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

vector<vector<char>> board;
vector<bool> row(8), diag(30);
void Solve(int c)
{
    if (c == 8)
        return;

    for (int r = 0; r < 8; r++)
    {
        if (!row[r] && !diag[r + c] && !diag[22 + r - c])
        {
            row[r] = diag[r + c] = diag[22 + r - c] = true,
                     board[r][c] = 'X';
            Solve(c + 1);
            board[r][c] = '.';
            row[r] = diag[r + c] = diag[22 + r - c] = false;
        }
    }
}
int n, m;
int c;
int fun(int n, int ans = 0) {
    if (n == m)
        return {ans};
    if (n > m) return -1;
    return max(fun(n * 2, ans + 1), fun(n * 3, ans + 1));

}
void Solve() {
    cin >> n >> m;
    cout << fun(n);
}
//}120 51840


signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);

    Solve(), cout << "\n";

    return 0;
}