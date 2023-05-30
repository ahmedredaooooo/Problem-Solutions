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
    ll n,k,x, chores[100+5], ans = 0; cin >> n >> k >> x;
    loop(n) cin >> chores[i];
    loop(n - k) ans += chores[i];
    ans += k * x;
    cout << ans;
}