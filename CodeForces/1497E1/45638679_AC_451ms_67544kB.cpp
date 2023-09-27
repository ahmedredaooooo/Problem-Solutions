#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "Debug.cpp"
#define FileI(fileName)
#define FileO(fileName)
#define fastIO 1;
#else
#define FileI(fileName) freopen(#fileName, "r", stdin);
#define FileO(fileName) freopen(#fileName, "w", stdout);
#define debug(...) 1
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cerr.tie(0); cout.tie(0);
#define Time(i, x...) x
#endif
#define un unsigned
#define ld long double
#define LL long long
#define int int
#define allc(x) begin(x), end(x)
#define rallc(x) rbegin(x), rend(x)
#define all(x,i,j) begin(x) + i, begin(x) + j
#define Test int TC; cin >> TC; while(TC--)

vector<int> SPF;
void SieveSPF(int range) // use it at the start before any LOOPS // SPF -> SMALLEST PRIME FACTOR // O(Nlog(log(N)))
{
    SPF = vector<int>(range + 1);
    iota(allc(SPF), 0LL); SPF[1] = 0;

    for (un int i = 2; i * i <= range; i += 1 + (i & 1))
        if (SPF[i] == i)
            for (un int j = i * i; j <= range; j += i)
                if (SPF[j] == j)
                    SPF[j] = i;
}

template<class FreqContainer>
void primeFactorizationSPF(LL N, FreqContainer& FactorFrequency) // O(log(N))
{

    int div, cnt;
    while (div = SPF[N])
    {
        for (cnt = 1; !((N /= div) % div); cnt++);
        if (cnt & 1)  FactorFrequency.insert(div);
    }

}




void Solve()
{
    int n, k, c = 1;cin >> n >> k;
    set<set<int>> v;
    for (int i = 0, x; i < n; ++i)
    {
        set<int> tmp;
        cin >> x, primeFactorizationSPF(x, tmp);
        v.count(tmp) ? c++, v.clear(), v.insert(tmp) : v.insert(tmp);
    }
   cout << c;
}


signed main()
{
    fastIO

    SieveSPF(1e7);
    Test Solve(), cout << '\n';

    return 0;
}
