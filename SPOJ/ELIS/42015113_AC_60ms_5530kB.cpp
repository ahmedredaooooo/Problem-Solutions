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

int n;
vector<int>v;
int mx = -1;
int rec(int idx = 0, int prv = LLONG_MIN)
{
    if (idx == n)return 0;
    int leave = rec(idx + 1, prv);int take = LLONG_MIN;
    if (v[idx] > prv)
        take = rec(idx + 1, v[idx]) + 1;
    return max(leave, take);
}
void Solve()
{

    cin >> n;
    v.resize(n);
    for (auto &i: v)cin >> i;

    cout << rec();
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cerr.tie(0);
    cout.tie(0);

    Solve(), cout << "\n";
    return 0;
}