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

LL GCD(LL a, LL b)
{
    if (!a || !b)
        return b + a;
    return GCD(b % a, a);
}

set<int> PrimeFactors(int n) {
    set<int> st;

    while (n % 2 == 0)
        st.insert(2), n /= 2;
    for (int i = 3; i * i <= n; ++i)
    {
        bool added = 0;
        while (n % i == 0)
        {
            if (!added)
                st.insert(i), added = 1;
            n /= i;
        }
    }
    if(n>2)st.insert(n);
    return st;
}

int n;
vector<int>v;
int GCDAll = 0;
set<int>allPrimes;
int numOfPrimes;
void Solve() {
    cin >> n;
    v = vector<int>(n);
    for(auto &i : v)cin >> i, GCDAll = GCD(GCDAll, i);

    for(auto &i : v)
    {
        set<int>st = PrimeFactors(i);
        numOfPrimes += st.size();
        allPrimes.insert(allc(st));
    }

    if (allPrimes.size() == numOfPrimes)cout << "pairwise coprime";
    else cout << (GCDAll == 1 ? "setwise coprime" : "not coprime");

}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
//Test
    Solve(), cout << "\n";
    return 0;
}