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

int n, l, r, mx = LLONG_MIN, mn = LLONG_MAX, dif;
vector<int>problems;
int findAllPossibleProblemSets(int idx = 0, int sm = 0, int mn = LLONG_MAX, int mx = LLONG_MIN, int num = 0)
{
    if (idx == problems.size())
        return sm <= r && sm >= l && mx - mn >= dif;
    int leave = findAllPossibleProblemSets(idx + 1, sm, mn, mx, num), take = findAllPossibleProblemSets(idx + 1, sm + problems[idx], min(mn, problems[idx]), max(mx, problems[idx]), num + 1);
    return take + leave;
}

void Solve()
{
    cin >> n >> l >> r >> dif;
    problems.resize(n);
    for (int &i: problems)cin >> i;
    sort(problems.begin(), problems.end());
    cout << findAllPossibleProblemSets();
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cerr.tie(0);
    cout.tie(0);

    Solve(), cout << "\n";
    return 0;
}