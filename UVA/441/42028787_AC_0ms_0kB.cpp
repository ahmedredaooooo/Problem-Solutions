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
int k;
vector<int>S, ans;
vector<bool>isUsed(50);
vector<vector<int>>V;
void generate(int idx = 0, int num = 0)
{
    if (num == 6)
    {
        for (int i = 0; i < 6; i++) {
            if (i > 0)
                cout << " ";
            cout << ans[i];
        }
        cout << endl;
        return(V.push_back(ans));
    }
    for (int val = idx; val < k; ++val) {

            ans[num] = S[val];

            generate(val+1, num + 1);


    }

}

void Solve()
{
    bool f = 0;
    while (cin >> k)
    {
        ans.resize(6);
        if (k == 0)return;
        if(!f)f=1; else cout <<"\n";
        S = vector<int>(k);
        for (int i = 0; i < k; ++i)
            cin >> S[i];
        generate();
//        for(auto i:V)
//            for (int j = 0; j < i.size(); ++j) {
//                cout << i[j] << " \n" [j == i.size() - 1];
//            }
//        debug(V);
    }
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);

    Solve();
    return 0;
}