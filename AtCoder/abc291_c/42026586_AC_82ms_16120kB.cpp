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

void Solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<pair<int, int>> st({{0, 0}});
    int x = 0, y = 0;
    for (auto c: s)
    {
        if (c == 'R')   x++;
        else if (c == 'U')  y--;
        else if (c == 'D')  y++;
        else    x--;
        if (st.find({x, y}) != st.end()) {
            cout << "Yes" << "\n";
            return;
        }
        st.insert({x, y});
    }
    cout << "No" << "\n";
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);

    Solve();
    return 0;
}