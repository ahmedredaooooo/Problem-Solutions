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



int n, s = 0;
vector<string>V;
void findAllPssible(string s, int idx = 1)
{
    if (idx == s.size()) return (V.push_back(s));

    string k = s;
    s = s.substr(0, idx) + "+" + s.substr(idx, s.size());

    findAllPssible(s, idx + 2);
    findAllPssible(k, idx + 1);

}

int addToSum(string s) {
    int x = 0, temp = 0;
    for (int i = 0; i < s.size(); i++) (s[i] == '+') ? x += temp, temp = 0 : temp = temp * 10 + s[i] - '0';

    return x + temp;
}

void Solve()
{
    cin >> n;
    findAllPssible(to_string(n));
    for (int i = 0; i < V.size(); ++i)
        s += addToSum(V[i]), debug(V[i]);
    cout << s;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cerr.tie(0);
    cout.tie(0);

    Solve(), cout << "\n";
    return 0;
}