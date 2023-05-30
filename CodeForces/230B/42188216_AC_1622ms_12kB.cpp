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

bool is_prime(int x )
{
    for (int i = 2; i * i <= x; i++)
        if (!(x % i)) return false;
    return true;
}

void is_Tprime(int x) {
    int tmp = sqrt(x);
    cout << ((tmp * tmp == x && is_prime(tmp) && tmp != 1) ? "YES" : "NO");
}

void Solve()
{
int n;cin >> n;
    is_Tprime(n);
}

signed main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cerr.tie(0);cout.tie(0);
Test
    Solve(), cout << "\n";
    
return 0;
}