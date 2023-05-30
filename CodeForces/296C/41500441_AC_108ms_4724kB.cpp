/*                                                    لا اله الا الله محمد رسول الله                                                            */
#include "bits/stdc++.h"
using namespace std;
#define ll first.first
#define rr first.second
#define dd second
#define LL long long
LL n, m, k, l, r;
vector<LL>ToDoOperations(1e5+5), MainArray, ans(1e5+5);
vector<pair<pair<LL,LL>,LL>>Operations(1e5+5);

signed main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr), cerr.tie(nullptr);
    
    cin >> n >> m >> k, MainArray.reserve(n + 1);
    
    for (LL i = 1; i <= n; ++i) cin >> MainArray[i];

    for(LL i = 1; i <= m ; ++i)cin >> Operations[i].ll >> Operations[i].rr >> Operations[i].dd;

    while (k--)cin >> l >> r, ToDoOperations[l]++, ToDoOperations[r + 1]--;

    partial_sum(ToDoOperations.begin(), ToDoOperations.end(), ToDoOperations.begin());

    for (LL i = 1; i <= 1e5 + 2; ++i) Operations[i].dd *= ToDoOperations[i];

    for (LL i = 1; i <= 1e5 + 2; ++i) ans[Operations[i].ll]+=Operations[i].dd, ans[Operations[i].rr+1]-=Operations[i].dd;

    partial_sum(ans.begin(), ans.end(), ans.begin());

    for (LL i = 1; i <= n; ++i)cout << MainArray[i] + ans[i] << " ";
}