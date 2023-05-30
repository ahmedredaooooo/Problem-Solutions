#include <bits/stdc++.h>
using namespace std;
    
#define un unsigned
#define el "\n"
#define ll  long long
const int N = 1e5 + 9;
int a[N];
#define Test unsigned int TC; cin >> TC; while(TC--)

void FAST()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
}

void solve() {

}
int main() {
    FAST();
  
    int n, m;
    cin >> n >> m;

    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        sum += x;
        a[i] = y - x;
    }
    sort(a, a + n);
    if (sum <= m)
        cout << "0";
    else {
        int ans = -1;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
            if (sum <= m) {
                ans = i + 1;
                break;
            }
        }
        cout << ans;
    }
}