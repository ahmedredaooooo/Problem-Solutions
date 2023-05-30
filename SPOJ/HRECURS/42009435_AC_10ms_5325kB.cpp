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

vector<int>row(8);
vector<vector<int>>vvv;
vector<bool>R(9), D1(15), D2(15);
void rec(int idx = 0) {
    if (idx == 8)return (vvv.push_back(row));
    for (int i = 0; i < 8; ++i) {
        if (!R[i] && !D1[i + idx] && !D2[i - idx + 7]) {
            row[idx] = i + 1, R[i] = D1[i + idx] = D2[i - idx + 7] = 1,
                    rec(idx + 1);
            R[i] = D1[i + idx] = D2[i - idx + 7] = 0;
        }
    }

}
int n;
vector<int>V;
int sm(int idx = 0) {
    if(idx == n)return 0;
    return V[idx] + sm(idx+1);

}
int ccc = 1;
void Solve()
{
cin >> n;
    V.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> V[i];
    }
    cout << "Case "<<ccc++<<": " << sm();
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cerr.tie(0);
    cout.tie(0);
Test
    Solve(), cout << "\n";
    return 0;
}