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

set<int> PrimeFactors(int n) {
    set<int> st;

    while (n % 2 == 0)
        st.insert(2), n /= 2;
    for (int i = 3; i * i <= n; i+=2)
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

bool almostPrime(int n)
{
    set<int>st;
    st = PrimeFactors(n);
    return st.size() == 2;
}

int n, c;
void Solve() {
    cin >> n;
    for (int i = 1; i <= n; ++i) c += almostPrime(i);
    cout << c;
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
//Test
    Solve(), cout << "\n";
    return 0;
}