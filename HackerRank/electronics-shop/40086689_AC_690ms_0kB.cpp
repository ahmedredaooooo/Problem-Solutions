#include <iostream>
#include <set>
#include <vector>

using namespace std;
#define sad cin.tie(0);cin.sync_with_stdio(0);
#define el "\n"
#define ll  long long
#define Test unsigned int TC; cin >> TC; while(TC--)


void solve()
{
int ans = -1, a[1005], b[1005], i, n, m, s, j;

cin >> s >> n >> m;
for (i = 1; i <= n; ++i) cin >> a[i];
for (i = 1; i <= m; ++i) cin >> b[i];
for (i = 1; i <= n; ++i)
for (j = 1; j <= m; ++j)
if (a[i] + b[j] <= s) ans = max(a[i] + b[j], ans);
cout << ans;
}


int main()
{
    sad;;
    solve();
    return 0;
}