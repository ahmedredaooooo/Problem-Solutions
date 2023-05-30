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

void Solve() {
//    int n;
//    cin >> n;
    string s;
    cin >> s;
    bool bread = 0;
    if(s.size() != 8)
    {
        cout << "No";
        return;
    }
    if (!isupper(s[0]) || !isupper(s[s.size() - 1]))
    {
        cout << "No";
        return;
    }
    if (s[1] < '1' || '9' < s[1])
    {
        cout << "No";
        return;
    }
    for (int i = 2; i < s.size() - 1; i++)
        if (s[i] < '0' || '9' < s[i])
        {
            cout << "No";
            return;
        }
    cout << "Yes";
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);

    Solve();
    return 0;
}