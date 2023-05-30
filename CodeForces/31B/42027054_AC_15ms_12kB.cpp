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

    string s;
    cin >> s;
    bool at = 0;
    int idxOfFirstAt = 0,idxOfLasttAt = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '@')at = 1, idxOfLasttAt = i;
        if (!idxOfFirstAt)idxOfFirstAt = i;
    }
    if (s.front() == '@' || s.back() == '@' || !at)
    {
        cout<<"No solution";
        return;
    }
    //A@a@
    for (int i = 0; i < s.size()-2; ++i) {
        if (s[i] == s[i+2] && s[i] == '@' || s[i] == s[i+1] && s[i] == '@')
        {
            cout<<"No solution";
            return;
        }
    }

//    for (int i = 0; i <= idxOfFirstAt+1; ++i) {
//        cout << s[i];
//    }
//    cout << ",";
    for (int i = 0; i < idxOfLasttAt; ++i) {
        cout << s[i];
        if (s[i-1] == '@')
            cout << ",";
    }
    for (int i = idxOfLasttAt; i < s.size(); ++i) {
        cout << s[i];
    }

}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);

    Solve();
    return 0;
}