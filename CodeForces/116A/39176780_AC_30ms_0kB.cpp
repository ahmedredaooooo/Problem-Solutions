#include <bits/stdc++.h>
using namespace std;

#define un unsigned
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)
#define loop(n) for(int i =0; i<n; i++)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {}
int main() {
    ll n, m, t, maxx = -1, sum = 0; cin >> t;
    loop(t) 
        cin >> n >> m,  sum -= n,   sum += m,
        maxx = max(maxx, sum);
    cout << maxx << endl;
}